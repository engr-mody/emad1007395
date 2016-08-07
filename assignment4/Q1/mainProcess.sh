#!/bin/bash

echo ""
echo "Main process, PID is [ $$ ]"
bash ./newProcess.sh&
wait
bash ./newProcess.sh&
wait
bash ./newProcess.sh&
wait
bash ./newProcess.sh&
wait
bash ./newProcess.sh&
wait
echo ""
echo "All processes are excecuted."
echo ""
