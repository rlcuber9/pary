#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Составьте программу ввода оценки P, полученной учащимися, и
выдачи текста «Молодец!», если P=5, «Хрошо!», если P=4 и «Плохо!», если P<=3.
"""

p = int(input())
if p == 5:
    print("Молодец!")
elif p == 4:
    print("Хрошо")
elif p <= 3:
    print("Плохо!")
