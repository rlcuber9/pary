#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2024 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""

"""

import math
import sys
x = float(input('x = '))
if x**2-9 == 0:
    print("невозможно вычислить y")
else:
    y = (3*x**2+1)/(x**2-9)
    print(f"y = {y}")
if 3*x == 0:
    print("невозможно вычислить z")
else:
    z = (2*x+1)/(3*x)
    print(f"z = {z}")
