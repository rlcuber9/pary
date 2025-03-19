#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
1.
Создайте список из случайных чисел. Найдите номер его последнего локального максимума
(локальный максимум — это элемент, который больше любого из своих соседей).
"""

from random import randint
list_ = []
for i in range(10):
    n = randint(1, 10)
    list_ += [n]

print(list_)
indexes = []
for i in range(1, len(list_)):
    if max(list_[i-1:i+2]) == list_[i]:
        indexes += [i]
if indexes != []:
    print(indexes[-1])
else:
    print()

"""
2.
Создайте список из случайных чисел. Найдите максимальное количество его одинаковых элементов.
"""

unique_list = list(set(list_))

max_count = 0
for i in unique_list:
    if list_.count(i) > max_count:
        max_count = list_.count(i)
print(max_count)

"""
3.
Создайте список из случайных чисел. Найдите второй максимум.
"""

list_.pop(list_.index(max(list_)))

print(max(list_))

"""
4.
Создайте список из случайных чисел. Найдите количество различных элементов в нем.
"""
count = 0
unique_list = list(set(list_))
for i in unique_list:
    if list_.count(i) > 1:
        count += list_.count(i)

print(len(list_) - count)
