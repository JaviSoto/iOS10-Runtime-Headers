#!/bin/bash

####
### At the bottom of ClassDisplay.m on the RuntimeBrowser project, add this fix:
# // Work around issue with class_getImageName() returning a path like "Frameworks//CoreData.framework/"
# NSString *imageName = [[NSString stringWithFormat:@"%s", class_getImageName(representedClass)] stringByReplacingOccurrencesOfString:@"//" withString:@"/"];
###
####

HEADERS_WEBSITE_URL="http://localhost:10000"

rm -rf "Frameworks"
rm -rf "PrivateFrameworks"
rm -rf "lib"

for file in $(curl -s "$HEADERS_WEBSITE_URL" | grep -oi -E 'href="([^"#]+)"' | cut -d'"' -f2); do
	header_file_tmp_path="/tmp/${file}"

	curl -s "${HEADERS_WEBSITE_URL}/${file}" > $header_file_tmp_path

	framework_path_line=$(cat ${header_file_tmp_path} | grep "Image: /Applications/Xcode" | head -1)

	if [ $(echo ${framework_path_line} | grep ".framework" | wc -l) -eq 1 ] ; then
		framework_folder_name=$(echo ${framework_path_line} | awk -F"/" '{print $(NF-2) "/" $(NF-1)}')
	elif [ $(echo ${framework_path_line} | grep ".dylib" | wc -l) -eq 1 ]; then
		framework_folder_name=$(echo ${framework_path_line} | awk -F"/" '{print $(NF-2) "/" $(NF-1) "/" $(NF)}')
		if [ $(echo $framework_folder_name | grep "lib/system/" | wc -l) -eq 1 ]; then # Make /lib/system/ just /lib/
			search="lib/system/"
			replace="lib/"

			framework_folder_name=${framework_folder_name/$search/$replace}
		elif [ $(echo $framework_folder_name | grep "usr/lib/" | wc -l) -eq 1 ]; then # Make /usr/lib/ just /lib/
			search="usr/lib/"
			replace="lib/"

			framework_folder_name=${framework_folder_name/$search/$replace}
		fi
	else
		echo "Skipping header $(cat ${header_file_tmp_path} | grep "Image: ")"
		continue
	fi

	mkdir -p "${framework_folder_name}" 2>/dev/null

	header_complete_path="${framework_folder_name}/${file}"

	echo "Saving ${header_complete_path}"
	mv $header_file_tmp_path $header_complete_path
done