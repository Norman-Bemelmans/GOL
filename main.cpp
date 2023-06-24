//Game of Life main loop

#include <iostream>
#include "Grid.h"
#include <string_view>

int main()
{
	std::cout << "Press 'ENTER' to advance one generation...";
	std::cout << "Press 'CTRL + c' to quit.\n\n";
	Grid grid_zero;
	Grid grid_one;
	grid_zero.read_from_file();

	while (1)
	{
		grid_zero.print_grid();
		std::cin.get();

		grid_one.update(grid_zero);
		std::swap(grid_one, grid_zero);
		std::system("clear");
	}
}

