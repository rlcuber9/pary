#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Найти сумму чисел от 1 до n, делящихся на 3 
"""

summ = 0
for i in range(1, int(input())+1):
    if i % 3 == 0:
        summ += i
print(summ)
