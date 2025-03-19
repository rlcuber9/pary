#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая:
Создает кортеж из полученной от пользователя строки, состоящей
из вещественных чисел, разделенных пробелами.
Выводит минимальный и максимальный элементы кортежа, а также их сумму.
"""
def toFloat(n):
    return float(n)
string = input()

list_ = string.split(" ")

tuple_ = tuple(map(toFloat, list_))
negative = sum([x<0 for x in tuple_])
positive = sum([x>0 for x in tuple_])
max_ = max(tuple_)
min_ = min(tuple_)

print(f"""Минимальное число: {min_}
Максимальное число: {max_}
Сумма min и max: {max_+min_}""")

# 3.45 6.78 8.99 1.45 4.32 19.04 0.55
