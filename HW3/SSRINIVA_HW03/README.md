# CS 332/532 – 1G- Systems Programming: HW-03

## Name: Shreyas Srinivasa

## Honor Code:

I, SHREYAS SRINIVASA, declare that I have completed this assignment completely and entirely on my own, without any unathorized consultation from others or unathorized access to online websites. I have read the UAB Academic Honor Code and understand that any breach of the UAB Academic Honor Code may result in severe penalties.

Student Signature/Initials: SS

Date: 3/11/2023

## About the program

1. stat() is used to get all file information
2. <dirent.h> readdir() is used recursively to traverse the filesystem
3. getopt() is used for all command line arguments and options
4. -f option searches for directories too. Indentation is preserved in the output for detected files
5. -s option ignores directories
6. -e option accepts a command to be executed with each and every file path of files discovered as an argument

## Instrctions to execute(Linux)

1. cc search.c -o search OR make
2. ./search [path] [-t nsecs] [-S] [-s <file size in bytes>] [-f <string pattern> <depth>]


