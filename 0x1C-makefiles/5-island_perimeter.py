#!/usr/bin/python3
"""Returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    for i in grid:
        for j in range(len(i)):
            if i[j] == 0:
                i[j] = 3
    a = i[j] -2
    b = i[j] -1
    c = i[j] -1
    d = i[j] -2
    e = i[j]
    f = i[j]

    perimeter = a + b + c + d + e + f
    return perimeter
