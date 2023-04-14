//Grid class header file
//Grid holds a cellmap for use in Conway's game of life.
//13 April 2023
//Summary of changes: updated declaration of static const int data members.


#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

class Grid
{
	public:
	Grid();
	void print_grid();
	int neighbor_count();
	void update(Grid g);
		
	private:
	static const int grid_height = 10;
	static const int grid_width = 10;
	static const char live_symbol;
	static const char dead_symbol;
	const int length;
	char g[length];
	void read_grid(g);


};

#endif

