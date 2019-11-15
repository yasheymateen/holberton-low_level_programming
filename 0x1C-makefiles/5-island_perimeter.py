#!/usr/bin/python3
""" island permimeter """


def island_perimeter(grid):
    """ returns the perimeter """

    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                perimeter += 4
                if x-1 >= 0 and grid[x-1][y] == 1:
                    perimeter -= 1
                if x+1 < len(grid) and grid[x+1][y] == 1:
                    perimeter -= 1
                if y-1 >= 0 and grid[x][y-1] == 1:
                    perimeter -= 1
                if y+1 < len(grid[0]) and grid[x][y+1] == 1:
                    perimeter -= 1
    return perimeter
