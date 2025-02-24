#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Даны два целых числа A и B. Выведите все числа от A до B включительно в порядке
возрастания, если A < B, или в порядке убывания в противном случае.
"""

a = int(input())
b = int(input())

if a < b:
    print(list(range(a, b+1)))
else: 
    print(list(range(a, b-1, -1)))
