#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Вывести четные числа из диапазона от 0 до n.
"""

for i in range(int(input())+1):
    if i % 2 == 0:
        print(f"{i} ")
