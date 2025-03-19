#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Имеется вложенный кортеж:
nested_tuple = ((12, 3, 1), (5, 11), (15, 7, 8, 9), (10, 6, 4))
Напишите программу для преобразования nested_tuple в обычный кортеж,
упорядоченный по возрастанию
"""

nested_tuple = ((12, 3, 1), (5, 11), (15, 7, 8, 9), (10, 6, 4))
new_nested_tuple = []
for i in nested_tuple:
    new_nested_tuple += list(i)

nested_tuple = tuple(sorted(new_nested_tuple))
print(nested_tuple)
