//Grid class header file
//10 April 2023
//Grid holds a cellmap for use in Conway's game of life.

#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

class Grid
{
	static constexpr int GRID_HEIGHT;
	static constexpr int GRID_WIDTH;
	static constexpr char LIVE_SYMBOL;
	static constexpr char DEAD_SYMBOL;
	constexpr int LENGTH;

	public:
	char g[LENGTH];
	void printGrid();
	int neighborCount();
	void update(Grid g);

};

#endif

