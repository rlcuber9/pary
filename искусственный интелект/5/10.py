#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Создайте список из введенной пользователем строки и удалите из него символы 'a', 'e', 'o'
"""
string = input()

list_string = list(string)
for i in range(len(list_string)):
    if list_string[i] in 'a', 'e', 'o':
        list_string.pop(i)
