#!/bin/bash
wget -P .. https://github.com/sadorkassa/alx-low_level_programming/tree/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD="$PWD/../liball.so"