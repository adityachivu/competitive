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
	int m, n, k;
	bool flag = false;
	vector<int> cards;

	int sum = 0;
	for ( int i = 0; i < 5; i++ )
	{
		cin >> k;
		cards.pb(k);
		sum += k;
	}

	sort(cards.begin(), cards.end());

	vector<int> opt;
	opt.pb(sum);
	for( int i = 0; i < 4; i++ )
	{
		if( cards[i] == cards[i+1])
			opt.pb(sum-(2*cards[i]));
	}
	for( int i = 0; i < 3; i++ )
	{
		if(cards[i] == cards[i+1] and cards[i+1] == cards[i+2] )
			opt.pb(sum-(3*cards[i]));
	}

	sort(opt.begin(), opt.end());

	cout << opt[0];




	return 0;
}