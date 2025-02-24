#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая находит все различные цифры в символьной строке.
Входные данные
На вход программе подаётся символьная строка.
"""

string = input()
output = []
numbers = list("0123456789")

for i in string:
    if i in "0123456789":
        output += [i]

if len(output) == 0:
    print("NO")
else:
    print(''.join(sorted(set(output))))
