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
	int n, m;
	cin >> n >> m;

	ll int total = 0, prev = 0, temp;
	cin >> prev;
	total += prev - 1;
	for( int i = 1; i < m; i++ )
	{
		cin >> temp;
		if ( temp < prev )
		{
			total += temp + n - prev;
		}
		else
		{
			total += temp - prev;
		}
		prev = temp;
		//cout << total << endl;
	}

	cout << total << endl;

	return 0;
}