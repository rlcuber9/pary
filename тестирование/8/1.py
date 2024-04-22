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
def power(x, n):
    z = 1 
    if n<0:
        return 'иди ты'
    else:
        for i in range(n+1):
           z *= x
        return z
print(power(2, -3))
