/*
    Compute binomial coef using the nCk formula
    n       n!
     C  =  ----
      k     k! (n-k)!
*/

#include <bits/stdc++.h>
using namespace std;
long long int binomialComputation(long long int n, long long int k)
{
	long long int arr[n + 1][k + 1];
	if(k == 0 || k == n)
		return 1;

	return binomialComputation(n - 1, k - 1) + binomialComputation(n - 1, k);
}
int main()
{
	long long int n = 0, k = 0;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter k: ";
	cin >> k;
	try
	{
		cout << binomialComputation(n, k) << endl;
	}
	catch(...)
	{
		cout << "Exception thrown" << endl;
	}
	return 0;
}