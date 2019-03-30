#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

map<string, string>m1, m2;

void main()
{
	int n;
	string s1, s2, s3;
	while (~scanf("%d", &n))
	{
		m1.clear();
		m2.clear();
		for (int i = 0; i < n; i++)
		{
			cin >> s1;
			if (s1 == "register")
			{
				cin >> s2 >> s3;
				if (m1.find(s2) == m1.end())
				{
					m1.insert(make_pair(s2, s3));
					cout << "success: new user added" << endl;
				}
				else
				{
					cout << "fail: user already exists" << endl;
				}
			}
			else if (s1 == "login")
			{
				cin >> s2 >> s3;
				map<string, string>::iterator it;
				if (m1.find(s2) != m1.end())
				{
					it = m1.find(s2);
					if (it->second != s3)
					{
						cout << "fail: incorrect password" << endl;
						continue;
					}
					else if (m2.find(s2) != m2.end())
					{
						cout << "fail: already logged in" << endl;
					}
					else if (it->second == s3)
					{
						m2.insert(make_pair(s2, s3));
						cout << "success: user logged in" << endl;
					}
				}
				else
				{
					cout << "fail: no such user" << endl;
				}
			}
			else if (s1 == "logout")
			{
				cin >> s2;
				if (m1.find(s2) == m1.end())
				{
					cout << "fail: no such user" << endl;
				}
				else if (m2.find(s2) == m2.end())
				{
					cout << "fail: already logged out" << endl;
				}
				else
				{
					map<string, string>::iterator it;
					it = m2.find(s2);
					m2.erase(it);
					cout << "success: user logged out" << endl;
				}
			}
		}
	}
}