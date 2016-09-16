#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define fl cout << endl;
#define ff first
#define ss second
#define ll long long

using namespace std;

int main()
{
	int m, n, k, a;

	cin >> n >> a;

	vector<int> bcd;
	int sum = 0;
	for ( int i = 0; i < n; i++ )
	{
		cin >> k;
		bcd.pb(k);
		sum += k;

	}

	int l = a-1;
	int r = a-1;
	while( l >= 0 && r <= n-1 )
	{
		if(bcd[l] != bcd[r])
			sum--;

		l--;
		r++;
	}

	cout << sum << endl;
	return 0;
}