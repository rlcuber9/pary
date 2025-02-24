#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Создайте программу которая использует вложенный цикл for для поиска простых
чисел от 2 до 100.
"""

for i in range(2, 100+1):
    if True not in [i%j == 0 for j in list(range(2, i))]:
        print(i)
