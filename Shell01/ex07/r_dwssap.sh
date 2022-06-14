#!/bin/sh
cat /etc/passwd | cut -d':' -f1 | awk 'FNR % 2 == 1' | rev | sort -r | sed "$FT_LINE1, $FT_LINE2"'!d' | sed -z 's/\n/, /g;s/, $/./'