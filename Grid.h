//Grid class header file
//Grid holds a cellmap for use in Conway's game of life.


#ifndef GRID_H
#define GRID_H

class Grid
{
	public:
	Grid(); // Data structure to hold grid of cells
	void print_grid();
	int neighbor_count(int i, int j);
	void update(Grid Other);
	void read_from_file(); // Reads initial cell configuration 
						   // from text file
		
	private:
	static const int grid_height = 40;
	static const int grid_width = 40;
	static const char live_symbol;
	static const char dead_symbol;
	char cellmap[grid_height + 2][grid_width + 2];

};

#endif

