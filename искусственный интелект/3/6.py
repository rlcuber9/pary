#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Нам нужно расшифровать определённый код в виде одного большого числа. 

Для этого нужно посчитать сумму цифр справа налево. 

Если мы встречаем в числе цифру 5, то выводим сообщение «Обнаружен разрыв» и заканчиваем считать сумму. 

В конце программы на экран выводится сумма тех цифр, которые мы взяли.
"""

x = input()
sum_digits_x = 0
for i in x[::-1]:
    int_i = int(i)
    if int_i == 5:
        break
    else:
        sum_digits_x += int_i
print(sum_digits_x)
