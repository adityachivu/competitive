#include <bits/stdc++.h>

#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

using namespace std;

int main()
{
	//int m, n, o, i, j, k, a, b, c;


	ll int l, r, x, y;

	cin >> l >> r >> x >> y;

	ll int k;
	cin >> k;

	float min = (float)l/(float)y;
	float max = (float)r/(float)x;

	// if( k >= min and k <= max and x*k >= l and x*k <= r and y*k >= l and y*k <= r)
	// 	cout << "YES";
	// else
	// 	cout << "NO";

	for( ll int i = x; i <= y; i++ )
	{
		if(i*k >= l and i*k <= r)
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}