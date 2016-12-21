#include <bits/stdc++.h>

#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define us unsigned

using namespace std;

int main()
{
	ll int a, b, c, n, m, k;



	cin >> n >> c;
	ll int prev, count = 1;
	cin >> prev;

	if( n == 1 )
	{
		cout << 1;
		return 0;
	}

	for(ll int i = 1; i < n; i++ )
	{
		cin >> a;
		if( (a - prev) > c )
		{
			count = 1;
		}
		else
		{
			count++;
		}
		prev = a;
		//cout << count << endl;

	}

	cout << count;
	return 0;
}