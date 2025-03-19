#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
7
Создайте список из случайных чисел и найдите наибольший элемент в нем.
"""

from random import randint

#7
list_ = []
for i in range(10):
    n = randint(1, 100)
    list_ += [n]


print(list_)
print(max(list_))

#8
"""
8
Найдите наименьший элемент в списке из задания 7
"""
print(min(list_))

"""
9
Найдите сумму элементов списка из задания 7
"""
print(sum(list_))

"""
10
Найдите среднее арифметическое элементов списка из задания 7
"""
print(sum(list_)/len(list_))
