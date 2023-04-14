//Grid cass implementation file
//13 April 2023
//Remember to implement read_grid!!!

#include <"Grid.h">
#include <cstring>

const int Grid::grid_height;
const int Grid::grid_width;
const int Grid::length = grid_height * grid_width;
const char Grid::live_symbol = 'X';
const char dead_symbol = '-';

Grid::Grid()
{
	cstring::memset(g, dead_symbol, size_of(g));
}
