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
c = int(input("c = "))
print("будем решать квадратное уравнение вида:")
print(f"{a}x^2+({b})x+({c})=0")
D = b**2-4*a*c
x1 = 0
x2 = 0
if a==0 and b!=0:
    x = (-c)/(b)
elif a!=0:
    x1 = (-b+D**(0.5))/(2*a)
    x2 = (-b-D**(0.5))/(2*a)

if a==0 and b!=0:
    print(f"Это линейное уравнение. Один корень: x = {x}")
elif D>0:
    print(f"x1={x1}", end='')
    print(f", x2={x2}")
elif a==0 and b==0 and c==0:
    print(f"Все коэффициенты равны 0 => x -- любое число")
    print(f"x ∊ ℝ")
elif a==0 and b==0 and c!=0:
    print(f"Неправильное уравнение -- корней нет")
elif D==0:
    print(f"x1=x2={x1}")
elif D<0:
    print(f"Действительных корней нет")
