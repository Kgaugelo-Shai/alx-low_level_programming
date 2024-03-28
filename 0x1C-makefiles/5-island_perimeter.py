#!/usr/bin/python3
""" Represents island perimeter measuring function."""


def island_perimeter(grid):
    """Returns perimiter of an island.

    The grid represents: water = 0 and land = 1.

    Args:
        grid (list): A list of list of integers.
    Returns:
        The perimeter of island as an integer
    """
    island_edge = 0
    island_size = 0
    w = len(grid[0])
    h = len(grid)

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                island_size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    island_edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    island_edge += 1
    return (island_size * 4 - island_edge * 2)
