#!/bin/bash
wget -P /tmp/ https://raw.github.com/JoeSireCodes/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gmnumber.so
export LD_PRELOAD=/tmp/gmnumber.so
