#!/bin/bash
#look for any Arduinos. 
#The current ones were connected recently and within the same minute
for a in `ls -lt /dev/ttyACM* | awk 'BEGIN{first = 1} {if (first) {current = $9; first = 0} if ( $9 == current ) { print $10} else{exit} }' `
do
    echo "uploading to $a"
    make arduino=$a upload
    if [ $? -ne 0 ]; then
        echo "nonzero return status"
        exit
    fi
done
