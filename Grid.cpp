#include "Grid.hpp"
  Grid::Grid(int rows, int cols)
  {
    this->rows=rows;
    this->rows=cols;
    for(int i=0; i<rows; i++)
    {
        this->grid.push_back({});
        for(int j=0; j<cols; i++)
        {
         this->grid[i].push_back(0);
        }
    }
  };
   void Grid:: drawTo(RenderWindow &window){};