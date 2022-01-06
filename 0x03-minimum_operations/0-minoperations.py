#!/usr/bin/python3
"""
Minimum operations


"""


def minOperations(n):
    """
    Function that finds le minimum number of operations to get n amount of Hs
    """
    if type(n) is not int:
        return 0
    if n <= 1:
        return 0

    alx = 0
    chars = 1
    copy = 1

    while chars < n:
        if n % chars == 0:
            copy = chars
            alx += 1
        if chars != n:
            chars += copy
            alx += 1
        else:
            break

    return alx
