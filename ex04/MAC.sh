#!/bin/sh
ifconfig | grep "ether" | tr -d "\t" | sed -e "s/ether //g" | sed -e "s/.$//g"
