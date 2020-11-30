#!/bin/bash

file="/home/tarun/PPL_Asgn3/A-1.c.012t.cfg"



if [ -r $file ]
then 
echo "File has read access"
else
echo "File does not have read access"

fi

if [ -w $file ]
then 
echo "File has write access"
else
echo "File does not have write access"

fi

if [ -x $file ]
then 
echo "File is executable"
else
echo "File is non executable"

fi

if [ -f $file ]
then 
echo "File is an ordinary file"
else
echo "File is not ordinary"

fi

if [ -d $file ]
then
echo "File is a directory"
else
echo "File is not a directory"

fi

if [ -s $file ]
then 
echo "File is not zero"
else
echo "File is zero"

fi

if [ -e $file ]
then 
echo "File exists"
else
echo "File does not exists"

fi
