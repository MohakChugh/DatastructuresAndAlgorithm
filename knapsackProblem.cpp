/* Choose which elements to select to maximize profit and minimize weight*/

#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}
int knapsackOptimization(int size, int values[], int weights[], int maxm_wt)
{
	// Base Case
	if(size == 0 || maxm_wt == 0)
		return 0;
	// If weight of the nth item is more
	// than Knapsack capacity, then
	// this item cannot be included
	// in the optimal solution
	if(weights[size - 1] > maxm_wt)
		return knapsackOptimization(size - 1, values, weights, maxm_wt);
	// Return maximum of two cases where item included or not included
	else
		return max(values[size - 1] +
					   knapsackOptimization(size - 1, values, weights, maxm_wt - weights[size - 1]),
				   knapsackOptimization(size - 1, values, weights, maxm_wt - weights[size - 1]));
}
int main()
{
	/*
        3 inputs are required ->
            1.  An array of values
            2.  An array of weights
            3.  Maximum Weight which can be added to the knapsack
    */
	int size;
	int maximum_weight;
	int weights[size];
	int values[size];
	cout << "Enter the number of elements available:";
	cin >> size;
	cout << "Enter the value of elements [element profit per item]";
	for(int i = 0; i < size; i++)
	{
		cin >> values[i];
	}
	cout << "Enter the weights of the elements : [integers]";
	for(int i = 0; i < size; i++)
	{
		cin >> weights[i];
	}
	cout << "Enter the maximum weight available:";
	cin >> maximum_weight;
	cout << knapsackOptimization(size, values, weights, maximum_weight);
	return 0;
}