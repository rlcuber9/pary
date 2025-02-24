#! /usr/bin/env python3
# vim:fenc=utf-8
#
# Copyright © 2025 rl <rl@rlcuber>
#
# Distributed under terms of the MIT license.

"""
Составьте программу ввода значения тнмпературы воздуха t и
выдачи текста «Хорошая погода!», если t>10 градусов и текста «Плохая погода!»,
если t<=10 градусов.
"""

t = int(input())

if t > 10:
    print( "Хорошая погода!")
elif t <= 10:
    print("Плохая погода!")

