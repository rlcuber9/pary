#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дано положительное число N. Вывести все числа от N до 0 с помощью цикла while.
"""

n = int(input())
i = n
while True:
    print(i, end='')
    if i == 0:
        break
    print(', ')
    i -= 1
