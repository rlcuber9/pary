#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дана строка, состоящая из слов, разделенных пробелами. Определите, сколько в
ней слов. Используйте для решения задачи метод count.
"""

string = input()
print(string.count(' ')+1)
