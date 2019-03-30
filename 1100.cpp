#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class team 
{
public:
	string id;
	int n;
};

bool comp(const team &t1, const team &t2);

void main() 
{
	int k;
	cin >> k;
	vector<team> T;
	while (k--) 
	{
		string temp;
		int num;
		cin >> temp >> num;
		team t;
		t.id = temp;
		t.n = num;
		T.push_back(t);
	}
	stable_sort(T.begin(), T.end(), comp);
	for (int i = 0;i<T.size();++i)
	{
		cout << T[i].id << " " << T[i].n << endl;
	}
}

bool comp(const team &t1, const team &t2)
{
	return t1.n>t2.n;
}