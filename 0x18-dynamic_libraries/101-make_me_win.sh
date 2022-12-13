#!/bin/bash
wget -P /tmp/ https://raw.github.com/usmancmd/alx-low_level_programming/main/0x18-dynamic_libraries/librandom.so
export LD_PRELOAD=/tmp/librandom.so
