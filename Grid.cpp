//Grid class source file


#include "Grid.h"
#include <iostream>
#include <fstream>

const int Grid::grid_height;
const int Grid::grid_width;
const char Grid::live_symbol = 'X';
const char Grid::dead_symbol = '-';


Grid::Grid()
{
	for (int i = 0; i < grid_height + 2; i++)
	{
		for (int j = 0; j < grid_width + 2; j++)
		{
			cellmap[i][j] = dead_symbol;
		}
	}
}


void Grid::print_grid()
{
	for (int i = 1; i < grid_height + 1; i++)
		{
			for (int j = 1; j < grid_width + 1; j++)
				{
					std::cout << cellmap[i][j] << " ";
				}	
			std::cout << "\n";
		}
}


int Grid::neighbor_count(int i, int j)
{
	int count = 0;

	if (cellmap[i-1][j-1] == live_symbol)
	{
		count++;
	}
	
	if (cellmap[i-1][j] == live_symbol)
	{
		count++;
	}

	if (cellmap[i-1][j+1] == live_symbol)
	{
		count++;
	}

	if (cellmap[i][j-1] == live_symbol)
	{
		count++;
	}

	if (cellmap[i][j+1] == live_symbol)
	{
		count++;
	}

	if (cellmap[i+1][j-1] == live_symbol)
	{
		count++;
	}

	if (cellmap[i+1][j] == live_symbol)
	{
		count++;
	}

	if (cellmap[i+1][j+1] == live_symbol)
	{
		count++;
	}

	return count;
}


void Grid::update(Grid Other)
{
	for (int i = 1; i < grid_height + 1; i++)
		{
			for (int j = 1; j < grid_width + 1; j++)
				{
					if (Other.cellmap[i][j] == live_symbol)
					{
						if (Other.neighbor_count(i,j) == 2 || Other.neighbor_count(i,j) == 3)
						{
							cellmap[i][j] = live_symbol;
						}
						else
						{
							cellmap[i][j] = dead_symbol;
						}
					}
					else
					{
						if (Other.neighbor_count(i,j) == 3)
						{
							cellmap[i][j] = live_symbol;
						}
						else
						{
							cellmap[i][j] = dead_symbol;
						}
					}
				}
		}
}


void Grid::read_from_file()
{
	std::ifstream grid_in;
	grid_in.open("cellmap_init.txt");
	
	for (int i = 1; i < grid_height + 1; i++)
		{
			for (int j = 1; j < grid_width + 1; j++)
				{
					grid_in >> cellmap[i][j];
				}
		}


	for (int i = 1; i < grid_height + 1; i++)
		{
			for (int j = 1; j < grid_width + 1; j++)
				{
					if (cellmap[i][j] == '0')
					{
						cellmap[i][j] = dead_symbol;
					}
					else
					{
						cellmap[i][j] = live_symbol;
					}
				}
		}
}


