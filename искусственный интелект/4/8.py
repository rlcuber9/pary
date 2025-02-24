#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая удаляет из строки все повторяющиеся символы

Входные данные
На вход программы подаётся строка, содержащая символы таблицы ASCII.
"""

string = input()
output = ''

# print(''.join(sorted(set(list(string)))))

for i in string:
    if i not in output:
        output += i

print(output)
