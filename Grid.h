//Grid class header file
//Grid holds a cellmap for use in Conway's game of life.
//13 April 2023
//Summary of changes: updated declaration of static const int data members.


#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

class Grid
{
	static const int GRID_HEIGHT = 10;
	static const int GRID_WIDTH = 10;
	static const char LIVE_SYMBOL;
	static const char DEAD_SYMBOL;
	constexpr int LENGTH;
	void read_grid(g);

	public:
	Grid();
	char g[LENGTH];
	void printGrid();
	int neighborCount();
	void update(Grid g);

};

#endif

