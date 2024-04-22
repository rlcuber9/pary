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
def fac(x):
    res = 1
    for i in range(x):
        res *= i+1
    return res
print(fac(1202))
