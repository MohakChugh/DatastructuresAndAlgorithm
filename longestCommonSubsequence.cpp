/* Find the Common Subsequence between 2 Strings */
#include <bits/stdc++.h>
using namespace std;
int longestSubsequenceFinder(string s1, string s2, int i, int j)
{
	// If any one strings end, return 0. return 0 adds 0 to the counter and terminates the function
	if(s1[i] == '\0' || s2[i] == '\0')
		return 0;
	else if(s1[i] == s2[i])
	{
		// If a character is common between the two strings, then counter(return value of function)
		return 1 + longestSubsequenceFinder(s1, s2, i + 1, j + 1);
	}
	else
	{
		// If no character is common between the two strings, then the current counter(return value) is returned
		return max(longestSubsequenceFinder(s1, s2, i + 1, j + 1),
				   longestSubsequenceFinder(s1, s2, i, j + 1));
	}
}

int main()
{
	string s1, s2;
	cout << "Enter the first string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin >> s2;
	cout << longestSubsequenceFinder(s1, s2, 0, 0);
	return 0;
}