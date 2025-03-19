#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу для подсчета количества пробелов и непробельных
символов в введенной пользователем строке.
"""

a = input()
count = 0
for i in a:
    if i == ' ':
        count += 1
print(f'Количество пробелов: {count}, количество других символов: {len(a)-count}')
