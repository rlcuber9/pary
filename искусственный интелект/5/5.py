#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дана строка, состоящая ровно из двух слов, разделенных пробелом. Переставьте
эти слова местами. Результат запишите в строку и выведите получившуюся строку.
"""

string = input()

print(" ".join(string.split(" ")[::-1]))
