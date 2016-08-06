#!/bin/bash

echo "Enter 10 integers to fint the largest one :"
echo "(Press Enter after each entry.)"
read largest
counter=0
while [ $counter -lt 9 ]
do
  read entry
  if [ $entry -gt $largest ]
  then
      largest=$entry
  fi
  counter=$[$counter+1]
done
echo "----------------------"
echo "The largest integer is : $largest"
