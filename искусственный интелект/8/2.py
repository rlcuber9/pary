#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая запрашивает у пользователя две строки и формирует
из этих строк список. Если строки состоят только из чисел, то программа добавляет в середину
списка сумму введенных чисел, иначе добавляется строка, образованная из слияния двух
введенных ранее строк. Итоговая строка выводится на экран.
"""
digits = '0123456789'

list_ = [input(), input()]

if (list_[0]+list_[1]).isdigit(): 
    summ = 0
    for i in list_[0]+list_[1]:
        summ += int(i)
    list_ = [list_[0]] +[summ]+ [list_[1]]
else:
    list_ = [list_[0]] + [list_[0]+list_[1]] + [list_[1]]
print(list_)
