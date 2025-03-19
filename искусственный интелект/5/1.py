#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Напишите программу, которая последовательно получает на вход имя, отчество,
фамилию и должность сотрудника, а затем преобразует имя и отчество в инициалы, добавляя
должность после запятой.
"""

list_ = []
for i in range(4):
    list_ += [input()]

print(f'{list_[2]} {list_[0][0]}. {list_[1][0]}, {list_[3]}')
