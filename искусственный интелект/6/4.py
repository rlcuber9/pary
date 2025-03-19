#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Имеется вложенный кортеж:
numbers = ((5, 4, 5, 4), (3, 3, 4, 6), (8, 9, 5, 4), (12, 4, 5, 1), (9, 3, 5, 1))
Напишите программу, которая формирует новый кортеж, состоящий из средних
арифметических значений элементов numbers.
"""

numbers = ((5, 4, 5, 4), (3, 3, 4, 6), (8, 9, 5, 4), (12, 4, 5, 1), (9, 3, 5, 1))

avgs = tuple([str(sum(x)/len(x)) for x in numbers])
print(" ".join(avgs))
