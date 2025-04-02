#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
В строке заменить все двоеточия (:) знаком процента (%). Подсчитать количество
замен
"""
count = input().count(":")
print("%".join(string.split(":")), count)
