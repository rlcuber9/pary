#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Пользователь вводит два целых числа. Выведите меньшее из них.
"""

a = int(input())
b = int(input())
if a > b:
    print(b)
else:
    print(a)
