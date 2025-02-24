#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Дано натуральное число n<=9. Выведите лесенку из n ступенек, i-я ступенька состоит
из чисел от 1 до i без пробелов.
"""
n = int(input())

counts_numbers = list(range(1, n+1))
list_numbers = [[j for j in range(1, i+1)] for i in counts_numbers]
list_strs_numbers = [''.join(map(str, i)) for i in list_numbers]
str_numbers = '\n'.join(list_strs_numbers)
print(str_numbers)


# str_stars = "\n".join(list_stars)
# print(str_stars)
