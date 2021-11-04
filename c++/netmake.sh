#!/bin/bash
if [ ! -n "$1" ] ;then
    echo "Usage: ./makenet.sh cppname"
else
    g++ -Wall -o $1 $1.cpp -lboost_system -lpthread 
fi