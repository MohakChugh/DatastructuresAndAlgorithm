/* Given a sequence of matrices, find the most efficient way to multiply these matrices together. */

#include <bits/stdc++.h>
using namespace std;

void matrixChainMultiplication(int arr[], int size)
{
	// Matrix which will hold all the computed possibilities
	int optimalMatrix[size][size];

	int lengthOfChain, costOfMultiplication, i, j, k;

	// When size of matrix is 1, then cost is zero. Therefore initialise all diagonal values as zero
	for(int i = 1; i < size; i++)
		optimalMatrix[i][i] = 0;

	for(lengthOfChain = 2; lengthOfChain < size; lengthOfChain++)
	{
		for(i = 1; i < size - lengthOfChain + 1; i++)
		{
			j = i + lengthOfChain - 1;
			// Initially set the cost to infinity and then find the optimal values
			optimalMatrix[i][j] = INT_MAX;
			for(k = i; k <= j - 1; k++)
			{
				// Applying the formula for matrix chain multiplication
				costOfMultiplication =
					optimalMatrix[i][k] + optimalMatrix[k + 1][j] + arr[i - 1] * arr[k] * arr[j];

				// If cost is less than the current optimal value, make it optimal value
				if(costOfMultiplication < optimalMatrix[i][j])
					optimalMatrix[i][j] = costOfMultiplication;
			}
		}
	}
	int optimalValue = optimalMatrix[1][size - 1];
	cout << "Optimal Multipication : " << optimalValue << endl;
}

int main()
{
	// Find out the number of matrices and take the size of them
	int n = 0;
	cout << "Enter the number of matrices : ";
	cin >> n;
	int a[n];
	cout << "Enter the size of matrices : ";
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	/* 	
		If a[] = 5 4 3 4 7 -> 
		then matrices are 5x4, 4x3, 3x4, 4x7 
	*/
	matrixChainMultiplication(a, n);
	return 0;
}