#!/bin/sh
ifconfig | awk '/ether/ {print $2}'
# Mais moderno: 
ip link | awk '/ether/ {print $2}'

