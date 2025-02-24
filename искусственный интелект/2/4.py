#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дано натуральное число. Определить будет ли это число нечетным и кратным 5.
"""

n = int(input())

if n % 5:
    print("кранто 5")
else:
    print("некранто 5")
