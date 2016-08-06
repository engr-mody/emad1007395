#!/bin/bash

echo "Available shapes :"
echo "1: Square     2: Rectangle"
echo "3: Circle     4: Triangle"
echo "---------------------------"
echo "Enter your choice number : "
read choice
echo ""

case $choice in
1) echo "xxxxx"
   echo "xxxxx"
   echo "xxxxx";;
2) echo "xxxxxxxxxxx"
   echo "xxxxxxxxxxx"
   echo "xxxxxxxxxxx";;
3) echo "     xx"
   echo "   xxxxxx"
   echo " xxxxxxxxxx"
   echo " xxxxxxxxxx"
   echo "   xxxxxx"
   echo "     xx";;
4) echo "    x"
   echo "   xxx"
   echo "  xxxxx"
   echo " xxxxxxx"
   echo "xxxxxxxxx";;
esac
echo ""
