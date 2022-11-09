#!/bin/bash

file1=$1
file2=$2
file3=$3

if [ $# -eq 3 ]; then
  case $2 in
    +) echo " $1 + $3 = `expr $1 + $3`" ;;
    -) echo " $1 - $3 = `expr $1 - $3`" ;;
    X) echo " $1 X $3 = `expr $1 \* $3`" ;;
    /) echo " $1 / $3 = `expr $1 / $3`" ;;
    *) echo "Second parameter is only + - X /" ;;
  esac
  shift
else
  echo "This program require three parameters"
fi
