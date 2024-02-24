#!/bin/bash

cat /etc/passwd | grep -v '^#' | \
	   	grep -Eo '^[^:]*' | awk 'NR % 2 == 0' | \
		rev | sort -r | \
	   	awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | \
		sed -z 's/\n/, /g' | sed 's/\(.*\), /\1./' 
