#!/bin/bash

echo "String Manipulation Program"
echo "1.Compare Strings"
echo "2.Joint two strings"
echo "3.Lenght of string"
echo "4.Occurance of Character"
echo "5.Occurance of Word"
echo "6.Reverse the String"
echo "Enter Choice:"
read ch

case $ch in
1)
echo "Enter String 1:"
read str1
echo "Enter String 2:"
read str2
len1=`expr $str1 | wc -c`
len2=`expr $str2 | wc -c`
if [ $len1 -gt $len2 ]
then 
echo "$str1 is greater than $str2"
elif [ $len1 = $len2 ]
then 
echo "$str1 and $str2 both are equal"
else
echo "$str1 is less than $str2"
fi 
;;

2)
echo "Enter String 1:"
read str1
echo "Enter String 2:"
read str2
str3=$str1$str2
echo "$str3"
;;

3)
echo "Enter String 1:"
read str1
len1=`expr $str1 | wc -c`
len1=`expr $len1 - 1`
echo "Lenght of $str1 is $len1"
;;

4)
echo "Enter String 1:"
read str1
echo "Enter character whose occurence you want to find"
read ch
echo "$num"
if [[ "$str1" = *"$ch"* ]];
then
echo "Found"
else
echo "Not Found"
fi
;;

5)
echo "Enter a string"
read str1
echo "Enter a substring you want to search for"
read str2
if [[ "$str1" == *"$str2"* ]];
then
echo "Found"
else
echo "Not Found"
fi
;;

6)
echo "Enter a String:"
read str
echo "Reverse String is:"`echo $str | rev`
;;

*)
echo "Bad choice" 
;;

esac

