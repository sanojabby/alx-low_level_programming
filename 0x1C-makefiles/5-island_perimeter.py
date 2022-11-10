#!/usr/bin/python3

"""

Defines an island perimeter

"""



def island_perimeter(grid):

    """

    Returns the island perimeter of a grid

    grid is a list of list of integers:

        0 represents a water zone

        1 represents a land zone

        One cell is a square with side length 1

        Grid cells are connected horizontally/vertically

        Grid is rectangular, width and height don’t exceed 100

    Grid is completely surrounded by water, and there is one island

    """

    width = len(grid[0])

    height = len(grid)

    grid_edges = 0

    grid_size = 0


    for m in range(height):

        for n in range(width):

            if(grid[m][n] == 1):

                grid_size += 1

                if (n > 0 and grid[m][n - 1] == 1):

                    grid_edges += 1

                if (m > 0 and grid[m - 1][n] == 1):

                    grid_edges += 1

    return (grid_size * 4 - grid_edges * 2)
