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
def f(a, b):
    if max((a,b)) == a:
        return f"{a**2} {b}"
    else:
        return f"{a} {b**2}"
print(f(1202, 10000000))
