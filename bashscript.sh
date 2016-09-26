#!/bin/bash
#this script prints my name every second for an input number of times

echo "How many times shall I say cameron's name?"

read number

for (( c = 1; c<=$number; c++))
	do
		echo "Cameron"
		sleep 1
	done
