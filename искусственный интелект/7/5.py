#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дана строка символов, среди которых есть одна открывающаяся и одна
закрывающаяся скобки. Вывести на экран все символы, расположенные внутри
этих скобок.
"""

print(input().split("(")[-1].split(")")[0])
