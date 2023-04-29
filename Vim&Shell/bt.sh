#!/bin/bash

# This script is used to start/stop/restart the bluetooth service
defaults write com.apple.BluetoothAudioAgent "Apple Bitpool Min (editable)" 35
defaults write com.apple.BluetoothAudioAgent "Apple Initial Bitpool Min (editable)" 53
defaults write com.apple.BluetoothAudioAgent "Apple Initial Bitpool (editable)" 35
#解决macbook连接蓝牙耳机/音响方法汇总
#https://zhuanlan.zhihu.com/p/43245079?utm_id=0
