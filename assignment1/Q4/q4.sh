#!/bin/bash

echo "This program will perform full-backup of your Downloads"
echo "folder then save the .tgz file into Documents folder and"
echo "clean the Downloads folde."
echo ""
echo "Please enter the user name to begin :"
read usr
cd /home/$usr/
tar -czf Downloads_Backup.tgz Downloads
mv Downloads_Backup.tgz /home/$usr/Documents/
rm -r /home/$usr/Downloads/*
echo ""
echo "Backup in progress . . . Done!"
echo "Downloads_Backup.tgz is successfully created in Documents."
echo "Downloads folder is clear."
echo ""
