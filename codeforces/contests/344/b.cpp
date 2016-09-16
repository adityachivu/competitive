#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <set>

#define ll long long
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
	ll n, m, k;

	ll color, choice, index;
	cin >> n >> m >> k;

	pair<ll, int> row[n];
	pair<ll, int> col[m];

	for ( int i = 0; i < n; i++ )
		row[i] = mp(0,0);

	for ( int i = 0; i < m; i++ )
		col[i] = mp(0,0);

	for ( int i = 0; i < k; i++ )
	{
		cin >> choice >> index >> color;
		if ( choice == 1 )
			row[index-1] = mp(color, i+1);
		else
			col[index-1] = mp(color, i+1);
	}

	for ( int it = 0; it < n; it++ )
		{
			for ( int j = 0; j < m; j++ )
			{
				if(col[j].second >= row[it].second)
				{
					cout << col[j].first << " ";
				}
				else
				{
					cout << row[it].first << " ";
				}
			}
			cout << endl;
		}

	
	return 0;
}