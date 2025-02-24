#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая выводит все цифры, встречающиеся в символьной строке больше
одного раза.
Входные данные
Входная строка может содержать содержит цифры, пробелы и латинские буквы.
"""

string = input()
output = ''

for i in "0123456789":
    if string.count(i) > 1:
        output += i

if output == "":
    print("NO")
else:
    print(output)
