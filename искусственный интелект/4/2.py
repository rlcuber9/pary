#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу для вывода узора по образцу, используя вложенный цикл.
образец:
"""

n = int(input())

counts_stars = list(range(1, n))
counts_stars = counts_stars + [n] + counts_stars[::-1]
list_stars = ["*"*i for i in counts_stars]
str_stars = "\n".join(list_stars)
print(str_stars)
