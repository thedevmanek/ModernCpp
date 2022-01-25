#!/usr/bin/env bash

#task1
echo 'The total number of lines are'

wc -l <data.dat

#task2
echo 'The total number of words named "dolor" are'
echo $(($(grep -c "dolor" data.dat) + $(grep -c "dalor" data.dat)))

#task3
echo 'The total number of words are'

wc -c <data.dat

#task4 
echo 'The total number of words starting with mol are'
grep -o -i mol  data.dat | wc -l