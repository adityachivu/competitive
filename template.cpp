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


	int l, r, x, y;

	cin >> l >> r >> x >> y;

	int k;
	cin >> k;

	float min = (float)l/(float)y;
	float max = (float)r/(float)x;

	if( k >= min and <= max)
		cout << "YES";
	else
		cout << "NO";


	return 0;
}