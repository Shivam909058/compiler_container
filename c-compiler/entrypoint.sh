#!/bin/bash

file_extension=$(echo "$1" | awk -F . '{print $NF}')

case "$file_extension" in
    c)
        gcc -o /tmp/main "$1" && /tmp/main > c_output.txt
        ;;
    cpp)
        g++ -o /tmp/main "$1" && /tmp/main > cpp_output.txt
        ;;
    py)
        python3 "$1" > py_output.txt
        ;;
    *)
        echo "Unsupported file extension."
        ;;
esac
