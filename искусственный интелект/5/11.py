#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Даны два списка, удалите все элементы первого списка из второго
"""

a = list(input())
b = list(input())

output = []

for i in a:
    while i in b:
        b.pop(b.index(i))
print(b)
