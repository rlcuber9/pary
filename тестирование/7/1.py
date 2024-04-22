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
# a, b, c = tuple(int(sys.argv[1:4]))
a = int(sys.argv[1])
b = int(sys.argv[2])
c = int(sys.argv[3])
# print(tuple(sys.argv[1:4]))
# разносторонний треугольник;
nepryam = True
if a<=0 or b<=0 or c<=0 or a+b<c or c+b<a or a+c<b:
    print('такого треугольника не существует')
else:
    print('такой треугольник существует')
    print('и это:')
    if not((a!=b) and (c!=b) and (a!=c)):
        print('не', end=' ')
    print('разносторонний треугольник')
    # прямоугольный треугольних,
    if not(a**2+b**2==c**2 or a**2+c**2==b**2 or b**2+c**2==a**2):
        print('не', end=' ')
        nepryam = not(nepryam)
    print('прямоугольный треугольник')
    nepryam = not(nepryam)
    # равнобедренный треугольник;
    if not(a==b or a==c or b==c):
        print('не', end=' ')
    print('равнобедренный треугольник')
    # остроугольный треугольник;
    if not(not(a**2+b**2>c**2 or a**2+c**2>b**2 or b**2+c**2>a**2) and nepryam) :
        print('не', end=' ')
    print('остроугольный треугольник')
    # равносторонний треугольник;
    if not((a==b) and (c==b) and (a==c)):
        print('не', end=' ')
    print('равносторонний треугольник')
    # тупоугольный треугольних.
    if not(a**2+b**2<c**2 or a**2+c**2<b**2 or b**2+c**2<a**2):
        print('не', end=' ')
    print('тупоугольный треугольник')
