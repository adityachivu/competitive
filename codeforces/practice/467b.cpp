#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define ins insert
#define iOS ios::sync_with_stdio(false)
#define all(x) x.begin(),x.end()

using namespace std;

int main()
{
	iOS;

	int m, n, k;

	cin >> n >> m >> k;
	int player[m];

	for( int i = 0; i < m; i++ )
	{
		cin >> player[i];
	}

	int fedor;
	cin >> fedor;

	int count = 0;
	for( int i = 0; i < m; i++ )
	{
		//cout << __builtin_popcount( fedor ^ player[i] ) << endl;
		if( __builtin_popcount( fedor ^ player[i] ) <= k )
			count++;
	}

	cout << count << endl;


	return 0;
}