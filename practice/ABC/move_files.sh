#!/bin/bash

END=165
for i in $(seq -w 001 $END); do
    result=`find . -maxdepth 1 -name ABC${i}_A_*.cpp 2>/dev/null`
    # ABC001_A_Sekisetsu.cpp を abc/a/main.cpp に移したい．
    if [ $? -ne 0 ]; then
        :
    elif [ -z $result ]; then
        :
    else
        echo $result
        mv $result ./abc${i}/a/main.cpp
    fi

    result=`find . -maxdepth 1 -name ABC${i}_B_*.cpp 2>/dev/null`
    if [ $? -ne 0 ]; then
        :
    elif [ -z $result ]; then
        :
    else
        echo $result
        mv $result ./abc${i}/b/main.cpp
    fi

    result=`find . -maxdepth 1 -name ABC${i}_C_*.cpp 2>/dev/null`
    if [ $? -ne 0 ]; then
        :
    elif [ -z $result ]; then
        :
    else
        echo $result
        mv $result ./abc${i}/c/main.cpp
    fi

    result=`find . -maxdepth 1 -name ABC${i}_D_*.cpp 2>/dev/null`
    if [ $? -ne 0 ]; then
        :
    elif [ -z $result ]; then
        :
    else
        echo $result
        mv $result ./abc${i}/d/main.cpp
    fi

    result=`find . -maxdepth 1 -name ABC${i}_E_*.cpp 2>/dev/null`
    if [ $? -ne 0 ]; then
        :
    elif [ -z $result ]; then
        :
    else
        echo $result
        mv $result ./abc${i}/e/main.cpp
    fi
done;