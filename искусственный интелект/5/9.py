#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Удалите все элементы из списка, созданного в задании 3
"""

from random import randint
list_ = []
for i in range(10):
    n = randint(1, 10)
    print(n)
    list_ += [n]

list_ = []
