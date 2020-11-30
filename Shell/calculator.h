#!/bin/bash

echo -n "Enter number 1: "
read a
echo -n "Enter number 2: "
read b
echo "1.Additon"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"

echo -n "Enter choice: "
read num

case $num in
1)
res=`expr $a + $b`
echo Result is : $res ;;

2)
res=`expr $a - $b`
echo Result is : $res;;

3)
res=`expr $a \* $b`
echo Result is : $res;;

4)
res=`expr $a / $b`
echo Result is : $res;;

*)
echo "Bad choice" 

esac

