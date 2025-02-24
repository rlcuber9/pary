#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая определяет правильность записи целого числа в восьмеричной
системе счисления.

Входные данные
На вход программы поступает символьная строка.

Выходные данные
Программа должна вывести ответ "YES", если строка представляет собой правильную запись
целого числа в восьмеричной системе счисления, и 'NO', если запись ошибочна.
"""

n_8 = input()
ban_char = 'qwertyuiop[]{}asdfghjklzxcvbnm<>!&?.:;-+*/\\@98'

for i in ban_char:
    if i in n_8:
        print('NO')
        break
else:
    print('YES')
