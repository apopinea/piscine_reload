#!/bin/sh
find . -name "*.sh" -type f | sed -e "s/...$//g" | xargs basename
