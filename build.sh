#!/bin/bash
INPUT_FILES=$(ls *.cpp)

g++ ${INPUT_FILES} -o shapes
chmod +x shapes
