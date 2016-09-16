#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define ll long long
#define ff first
#define ss second

using namespace std;

int main()
{
	ll numins, numrem;

	vector<pair<string, ll> > input;
	vector<pair<string, ll> > output;

	ll n;
	cin >> n;

	for( int i = 0; i < n; i++ )
	{
		string op;
		ll num;

		cin >> op >> num;
		input.pb(mp(op, num));
		
	}

	bool eminflag = false;
	ll emin;
	ll curri = 0;
	ll ei = 0;
	while( not input.empty())
	{
		if(not eminflag)
		{
			while( input[ei] != "getMin" and ei < input.size())
				ei++;

			if(ei != input.size())
				emin = input[ei].second;
		}
	}
	



	return 0;
}