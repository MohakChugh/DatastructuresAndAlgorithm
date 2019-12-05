// #include <bits/stdc++.h>
// using namespace std;
// void dfs(list<pair<char, char>> graph, char at, int n)
// {
// 	list<pair<char, char>>::iterator it;
// 	it = graph.begin();

// 	for(it = graph.begin(); it != graph.end(); it++)
// 	{
// 		cout << it->first;
// 		cout << it->second;
// 	}
// }
// int main()
// {
// 	int n;
// 	cout << "Enter the number of nodes:";
// 	cin >> n;
// 	int visited[n];
// 	for(int i = 0; i < n; i++)
// 		visited[i] = 0;
// 	pair<char, char> nodes;
// 	list<pair<char, char>> graph;
// 	char node;
// 	char ch = 'y';
// 	int i = 0;
// 	while(ch == 'y')
// 	{
// 		cout << "Enter node : ";
// 		cin >> node;
// 		nodes.first = node;
// 		cout << "Connected to : ";
// 		cin >> node;
// 		nodes.second = node;
// 		graph.push_back(nodes);

// 		cout << "Add another edge? (y/n)";
// 		cin >> ch;
// 		i++;
// 	}
// 	dfs(graph, 'a', n);
// 	return 0;
// }