#include <bits/stdc++.h>
using namespace std;
void linearSearch(int arr[], int n, int element)
{
	int flag = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == element)
		{
			cout << "Element found at " << i << " index" << endl;
			flag = 1;
			return;
		}
	}
	if(flag == 0)
	{
		cout << "Element not found" << endl;
	}
	return;
}
void binarySearch(int arr[], int n, int element)
{
	int beg = 0, last = n - 1, mid;
	while(beg <= last)
	{
		mid = (last + beg) / 2;
		if(element == arr[mid])
		{
			cout << "Element found at index " << mid << endl;
			return;
		}
		if(element < arr[mid])
			last = mid - 1;
		if(element > arr[mid])
			beg = mid + 1;
	}
	return;
}
int main()
{
	int n;
	cout << "Enter the size of array:";
	cin >> n;
	int arr[n];
	cout << "Enter the values of array in ascending order:";
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int element;
	cout << "Enter the element you want to search : ";
	cin >> element;
	linearSearch(arr, n, element);
	binarySearch(arr, n, element);
	return 0;
}