#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая считает знаки пунктуации в символьной строке. К знакам пунктуации относятся символы из набора 
".,;:!?"
"""
punctuations = ".,;:!?"

o = 0
string = input()
for i in string:
    if i in punctuations:
        o += 1
print(o)
