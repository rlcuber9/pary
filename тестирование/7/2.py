#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2024 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""

"""
import math

a = int(input("a = "))
b = int(input("b = "))
print("будем решать уравнение вида:")
print(f"(x+{a})/(x^2-{b})")
x = -a
if x**2 == b:
    print(f'Действительных корней нет')
else:
    print(f'x = {x}')
