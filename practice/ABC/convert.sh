#!/bin/bash

END=165
for i in $(seq -w 001 $END); do
    if [[ ! -d ./abc${i} ]]; then
        acc n abc${i}
    fi
done;