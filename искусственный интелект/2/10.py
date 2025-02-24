#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая получает от пользователя число 1 <= n <= 9, и выводит
таблицу умножения для всех чисел от 1 до n.
"""

n = int(input())

for i in range(9):
    print(f"{n} * {i+1} = {(i+1)*n}")
