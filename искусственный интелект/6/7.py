#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Имеется кортеж списков:
numbers = ([4, 5], [4, 5], [1, 6], [7, 3], [3, 3], [2, 4], [9, 5], [1, 1])
Напишите программу, которая добавит цифру 5 в конец каждого списка.
"""

numbers = ([4, 5], [4, 5], [1, 6], [7, 3], [3, 3], [2, 4], [9, 5], [1, 1])

for i in numbers:
    i += [5]
print(numbers)
