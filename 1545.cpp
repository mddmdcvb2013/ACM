#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

void main() 
{
	map<char, set<string>> dic;
	string w;
	int n;
	cin >> n;
	while (--n >= 0)
	{
		cin >> w;
		dic[w[0]].insert(w);
	}
	char c;
	cin >> c;
	for (auto s : dic[c])
	{
		cout << s << endl;
	}
}