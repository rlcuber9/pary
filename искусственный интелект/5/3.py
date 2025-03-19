#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дана строка. Замените в этой строке все появления буквы h на букву H, кроме
первого и последнего вхождения.
"""

string = input()
string = list(string)
for i in range(1, len(string)-1):
    if string[i] == 'h':
        string.pop(i)
        string.insert(i, 'H')
print(''.join(string))
