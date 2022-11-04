#!/usr/bin/python3
"""
a function def island_perimeter(grid):
that returns the perimeter of the island described in grid:
"""


def island_perimeter(grid):
    """
    returns perimeter of a grid

    Args:
        grid (_type_): is a list of list of integers
    """

    perimeter = 0

    rows = len(grid)
    for row in range(rows):
        columns = len(grid[row])

        for column in range(columns):
            if grid[row][column] == 1:
                if row == 0 or grid[row - 1][column] == 0:
                    perimeter += 1
                if column == 0 or grid[row][column - 1] == 0:
                    perimeter += 1
                if row == len(grid) - 1 or grid[row + 1][column] == 0:
                    perimeter += 1
                if column == len(grid[row]) - 1 or grid[row][column + 1] == 0:
                    perimeter += 1

    return perimeter
