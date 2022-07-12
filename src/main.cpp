#include<iostream>
#include"../inc/solution.hpp"


void PrintMatrix(const std::vector<std::vector<int>>& matrix)
{
	for(auto row : matrix)
	{
		for(auto element : row)
		{
			std::cout << element;
		}
		std::cout << 'n';
	}
}

int main()
{
	std::vector<std::vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};

	Solution sol{};
	sol.rotate(matrix);
	PrintMatrix(matrix);
	return 0;
}

