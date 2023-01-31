#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int size = grid.size();
        for (int x = 0; x < size; x++)
        {
            for (int y = 0; y < size; y++)
            {
                if ((x == y) || (x + y == size - 1))
                {
                    if (grid[x][y] == 0)
                    {
                        return false;
                    }
                }
                else if (grid[x][y]) {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    vector<vector<int>> grid; 
}