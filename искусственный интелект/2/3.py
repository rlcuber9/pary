#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дано натуральное число. Определить будет ли это число четным и крантым 4.
"""

n = int(input())

if n % 4:
    print("кранто 4")
else:
    print("некранто 4")
