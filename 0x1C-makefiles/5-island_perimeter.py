#!/usr/bin/env python3
"""island_perimeter Function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid.
    """
    w = len(grid[len(grid) - len(grid)])
    h = len(grid)

    parm =  0
    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                parm = parm + 4
                if (j > 0 and grid[i][j - 1] == 1):
                    parm = parm - 2
                if (i > 0 and grid[i - 1][j] == 1):
                    parm = parm - 2
    return (parm)
