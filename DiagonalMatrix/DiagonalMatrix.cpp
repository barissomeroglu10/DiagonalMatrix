/*
In this code we will find the diagonal matrix, the sum of the elements of the lower triangle and the upper triangle.

Developer: Barış Someroğlu
Date: 10.01.2024 / 2:00 a.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, TotalDiagonalMatrix = 0, TotalLowerTriangle = 0, TotalUpperTriangle = 0;

	cout << "Please Enter Size of Matrix: ";
	cin >> n;

	cout << "\n";

	vector<vector<int>> B(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Please Enter B[" << i << "][" << j << "]: ";
			cin >> B[i][j];
		}
	}

	cout << "\n";

	cout << "Matrix is: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << " ";
		}

		cout << "\n";
	}

	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				TotalDiagonalMatrix += B[i][j];
			}

			else if (i > j)
			{
				TotalLowerTriangle += B[i][j];
			}

			else
			{
				TotalUpperTriangle += B[i][j];
			}

		}
	}

	cout << "Total for the Diagonal Matrix: " << TotalDiagonalMatrix << endl;
	cout << "Total for the Lower Triangle: " << TotalLowerTriangle << endl;
	cout << "Total for the Upper Triangle: " << TotalUpperTriangle << endl;

	return 0;
}