#include <bits/stdc++.h>

#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
	int n;
	cin >> n;

	int num = 0;
	int min = 101, max = -1;
	int minind = 0, maxind = 0;
	for( int i = 0; i < n; i++ )
	{
		cin >> num;
		if( num <= min )
		{
			minind = i + 1;
		}
		else if( num > max )
		{
			maxind = i + 1;
		}

	}

	int ans = n - minind + maxind;
	cout << ans;

	return 0;
}