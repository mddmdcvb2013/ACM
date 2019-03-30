#include <iostream>
#include <algorithm>
using namespace std;

const int dx[] = { 1,1,1,-1,-1,-1,0,0 }, dy[] = { 1,-1,0,1,-1,0,1,-1 };
const int kx[] = { 1,1,2,2,-1,-1,-2,-2 }, ky[] = { 2,-2,1,-1,2,-2,1,-1 };

int n;

bool check(int x, int y)
{
	return (x >= 1 && x <= n && y >= 1 && y <= n);
}

int x, y;

void main()
{
	cin >> n >> x >> y;
	int ans1 = 8, ans2 = 8;
	for (int i = 0;i<8;i++)
	{
		int xx = dx[i] + x, yy = dy[i] + y;
		int xxx = kx[i] + x, yyy = ky[i] + y;
		if (!check(xx, yy))
		{
			ans1--;
		}
		if (!check(xxx, yyy))
		{
			ans2--;
		}
	}
	cout << "King: " << ans1 << endl;
	cout << "Knight: " << ans2 << endl;
	ans1 = min(x - 1, y - 1) + min(x - 1, n - y) + min(n - x, y - 1) + min(n - x, n - y);
	ans2 = n * 2 - 2;
	cout << "Bishop: " << ans1 << endl;
	cout << "Rook: " << ans2 << endl;
	cout << "Queen: " << ans1 + ans2 << endl;
}