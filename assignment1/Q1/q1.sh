#!/bin/bash

echo "Enter the first operand :"
read n1
echo "Enter the operation (+, -, *, or /)"
read op
echo "Enter the second operand :"
read n2

case $op in
'+') let result="$n1+$n2";;
'-') let result="$n1-$n2";;
'*') let result="$n1*$n2";;
'/') let result="$n1/$n2";;
esac

echo "--------------------------------"
echo -e "RESULT : $n1 $op $n2 = $result"
