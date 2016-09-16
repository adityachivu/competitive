#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define ll long long
#define ff first
#define ss second

using namespace std;

int main()
{
	int m, n, k;

	cin >> n;

	vector<pair<string, pair<int, int> > > hand;

	for ( int i = 0; i < n; i++ )
	{
		string name;
		int bef;
		int aft;

		cin >> name >> bef >> aft;

		if (bef >= 2400 and aft > bef )
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";




	return 0;
}