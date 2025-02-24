#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Назовем число красивым, если оно является четырехзначным и делится
нацело на 7 или 17. Напишите программу, определяющую, является ли
введенное число красивым. Программа должна вывести «YES», если число
является красивым, или «NO» в противном случае.
"""

a = int(input())

if (len(str(a)) == 4) and (a%7 == 0 or a%17 == 0):
    print("YES!")
else:
    print("NO!")
