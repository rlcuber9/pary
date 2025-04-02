#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая получает на вход строку, и формирует из
нее 2 списка:
- в первый список входят слова, начинающиеся с гласных букв;
- второй список состоит из слов, начинающихся с согласных.
"""

s = input()
"qwrtpsdfghjklzxcvbnm"

vowel = "eyuioa"
consonantal = "qwrtpsdfghjklzxcvbnm"
list_ = [[], []]

for i in s.split(" "):
    if i[0] in vowel:
        list_[0] += [i]
    elif i[0] in consonantal:
        list_[1] += [i]
print(list_[0])
print(list_[1])
