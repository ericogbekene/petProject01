#!/bin/bash

echo Welome to the program

read -p "What is your name: " userName

echo Welcome, $userName

echo Enter an extention

read -p "Enter an extention: " extension

#/bin/env

ls *$extension
