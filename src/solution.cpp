#include"../inc/solution.hpp"


// 90 deg CW rotation of elements == matrix transpose then reflection about its vertical axis
void Solution::rotate(std::vector<std::vector<int>>& matrix)
{  
    int size = matrix.size();
    // matrix transpose, iterate over either upper/lower triangle elements only
    for(int row{0}; row < size; ++row)
    {
        for(int col{0}; col < row; ++col) // only iterates over lower triangle elements
        {
            std::swap(matrix[row][col], matrix[col][row]);
        }
    }
    // reflection of matrix about its vertical axis
    for(int row{0}; row < size; ++row)
    {
        for(int col{0}; col < size/2; ++col) // only iterate over columns up to the reflection axis
        {
            std::swap(matrix[row][col], matrix[row][size-(col+1)]); // col 0 <--> col size-1, col 1 <--> col size-2 etc.
        }
    }
}