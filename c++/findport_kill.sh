#!/bin/bash
if [ ! -n "$1" ] ;then
    echo "Usage: ./findport_kill.sh port_number"
else
    echo $(netstat -tunlp | grep $1) > 1
        sed 's/ //g' 1 > 2
        echo | grep -o LISTEN.* 2 > 3
        v1=$(cat 3)
        v2=`echo $v1 | tr -cd "[0-9]"`
        if [ ! $v2 ] ; then
                echo "No process is occupying the port !!" 
        else 
                kill -9 $v2
                echo "kill success"
        fi
        rm -f 1
        rm -f 2
        rm -f 3
fi