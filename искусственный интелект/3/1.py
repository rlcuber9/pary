#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дано положительное число N. Вывести все числа от 0 до N с помощью цикла while.
"""

n = int(input())
i = 0
while True:
    print(i, end='')
    if i == n:
        break
    print(', ')
    i += 1
