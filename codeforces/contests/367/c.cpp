#include <bits/stdc++.h>

#define ff first
#define ll long long
#define ss second
#define mp make_pair
#define pb push_back
#define lc lexicographic_compare

using namespace std;

int main()
{
	int m, n, k, a, b;

	ll minincl = 0, minexcl = 0;

	cin >> n;
	vector<ll> c;
	vector<string> words;
	vector<bool> flipped;

	for(int i = 0; i < n; i++ )
	{
		ll temp;
		cin >> temp;
		c.pb(temp);
		flipped.pb(false);
	}

	for(int i = 0; i < n; i++ )
	{
		string a;
		cin >> a;

		words.pb(a);
	}

	for(int i = 1; i < n; i++ )
	{
		if( lc(words[i].begin(), words[i].end(), words[i-1].begin(), words[i-1].end()) )
		{
			string temp = words[i];
			reverse(temp.begin(), temp.end() );

			if( lc(words[i-1].begin(), words[i-1].end(), temp.begin(), temp.end() )
			{
				if( flipped[i-1] )
				{
					minexcl += c[i];
				}
				else
				{
					minincl += c[i];
				}
			}
			else
			{
				cout << -1 << endl;
				return 0;
			}
		}


	}

	return 0;
}