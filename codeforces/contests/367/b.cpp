#include <bits/stdc++.h>

#define ff first
#define ll long long
#define ss second
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
	ll m, n, k, a, b;

	vector<ll> shop;

	cin >> n;
	for( int i = 0; i < n; i++ )
	{
		cin >> k;
		shop.pb(k);
	}

	sort(shop.begin(), shop.end());

	int q;
	cin >> q;

	for(int i = 0; i < q; i++ )
	{
		ll m;
		cin >> m;
		int ind;

		cout << (int)(upper_bound(shop.begin(), shop.end(), m) - shop.begin()) << endl;
	}

	

	return 0;
}