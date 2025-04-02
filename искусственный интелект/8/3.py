#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая:
- принимает на вход строку, состоящую из случайных слов;
- отбрасывает слова, в которых есть небуквенные символы;
- переставляет слова в порядке возрастания;
- выводит на экран слова в столбик, без кавычек.
"""

s = input()
new_s = ''
for i in s.split(" "):
    if i.isalpha():
        new_list_s += [i]
new_list_s.sort()

print("\n".join(new_list_s))
