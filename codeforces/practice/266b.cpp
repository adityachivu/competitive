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

	int n, t;
	string s;
	cin >> n >> t >> s;
	vector<int> swap;

	for( int i = 0; i < t; i++ )
	{
		swap.clear();
		for(int j = 1; j < n; j++ )
		{
			if( s[j] == 'G' and s[j-1] == 'B' )
			{
				swap.pb(j);
			}
		}
		//cout << swap.size() << endl;
		for( int j = 0; j < swap.size(); j++ )
		{
			s[swap[j]] = 'B';
			s[swap[j]-1] = 'G';
		}
	}

	cout << s << endl;

	return 0;
}