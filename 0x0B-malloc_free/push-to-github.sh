#!/bin/bash
printf "%*s\n" $(( ($(tput cols) + 21) / 2 ))  '' | tr ' ' -
echo -e "\033[44mHello sir OuYa\033[0m"

if [ -z "$1" ]
then
  echo "Usage: $0 <commit message>"
  exit 1
fi

printf "%*s\n" $(( ($(tput cols) + 21) / 2 ))  '' | tr ' ' -
echo -e "\033[44m$1\033[0m"
git add .
git status
git commit -m "$1"
git push 
make

