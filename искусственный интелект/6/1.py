#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая:
Создает кортежи из положительных и отрицательных целых чисел на основе
полученной от пользователя строки.
Выводит количество положительных и отрицательных чисел в этих кортежах.
"""
def toInt(n):
    return int(n)
string = input()

list_ = string.split(" ")

tuple_ = tuple(map(toInt, list_))
negative = sum([x<0 for x in tuple_])
positive = sum([x>0 for x in tuple_])
print(f"Кортеж {tuple_} состоит из {positive} положительных чисел")
print(f"Кортеж {tuple_} состоит из {negative} отрицательных чисел")
# 45 -6 -9 43 23 5 2 -9 -1 6 3
