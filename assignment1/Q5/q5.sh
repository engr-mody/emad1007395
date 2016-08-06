#!/bin/bash

echo "This program will perform full-backup of your Downloads"
echo "folder or update a previousely made backup then save the"
echo ".tgz file into Documents folder."
echo ""
echo "Please enter the user name to begin :"
read usr
cd /home/$usr/
tar -czf Downloads_Backup.tgz Downloads
mv Downloads_Backup.tgz /home/$usr/Documents/
echo ""
echo "Backup in progress . . . Done!"
echo "Downloads_Backup.tgz is successfully created/updated in Documents."
echo ""
