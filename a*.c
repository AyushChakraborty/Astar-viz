//using graphs and BFS to implement A* algo, with the visualisation using SDL

//TODO: implement graph using LL impl, for specified amt of cells
//show the grid as a bunch of cells
//enable the user to select start, end cells, also write it on top of screen
//show the searching process visually, fill all the grids search from one of the neighbours
//of the starting cell with one col, hence there would be 4 cols of cells in the grid
//show the final path in a diff col at the end


#include <stdio.h>
#include <SDL.h>

#define GRID_LEN 15  //same as grid width

typedef struct cell {
    int start;
    int end;
    struct cell *next;  //using the LL implementation of graphs
}cell;


int main() {
    return 0;
}