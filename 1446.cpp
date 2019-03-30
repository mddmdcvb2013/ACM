#include <iostream>
#include <string>  
#include <vector>  
#include <unordered_map>  
using namespace std;

namespace 
{
	static const int HOUSES = 4;
	string houses[HOUSES] = { "Slytherin","Hufflepuff","Gryffindor","Ravenclaw" };
}

void main()
{
	int n = 0;
	cin >> n;

	string name, houseName;
	cin.ignore();

	unordered_map<string, vector<string> > umSVS;
	for (int i = 0; i < n; i++)
	{
		getline(cin, name);
		getline(cin, houseName);
		umSVS[houseName].push_back(name);
	}
	for (int i = 0; i < HOUSES; i++)
	{
		vector<string> tmp = umSVS[houses[i]];
		cout << houses[i] << ":\n";
		for (int j = 0; j < (int)tmp.size(); j++)
		{
			cout << tmp[j] << endl;
		}
		cout << endl;
	}
}