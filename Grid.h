//Grid class header file
//Grid holds a cellmap for use in Conway's game of life.


#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

class Grid
{
	public:
	Grid();
	void init();
	void print_grid();
	int neighbor_count(int i, int j);
	void update(Grid Other);
	void read_from_file();
		
	private:
	static const int grid_height = 10;
	static const int grid_width = 10;
	static const char live_symbol;
	static const char dead_symbol;
	char cellmap[grid_height + 2][grid_width + 2];

};

#endif

