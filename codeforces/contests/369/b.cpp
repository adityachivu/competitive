#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long

int main()
{
	int n;
	cin >> n;

	if ( n==1)
	{
		cout << 1;
		return 0;
	}

	ll int sq[n][n];
	ll int num;

	vector<ll int> rowsum(n, 0);
	vector<ll int> colsum(n, 0);
	vector<pair<ll int, int> > trowsum(n, mp(0,0));
	vector<pair<ll int, int> > tcolsum(n, mp(0,0));

	int zi, zj;

	ll int totrowsum = 0, totcolsum = 0;

	for( int i = 0; i < n; i++ )
	{
		for(int j = 0; j < n; j++)
		{
			cin >> num;
			if(num == 0)
			{
				zi = i;
				zj = j;
			}
			sq[i][j] = num;
			rowsum[i] += num;
			colsum[j] += num;

			totrowsum += num;
			totcolsum += num;
		}
	}

	for(int i = 0; i < n; i++)
	{
		trowsum[i] = (mp(rowsum[i], i));
		tcolsum[i] = (mp(colsum[i], i));
	}

	sort(trowsum.begin(), trowsum.end());
	sort(tcolsum.begin(), tcolsum.end());

	ll int rdsum = 0, ldsum = 0;


	if(trowsum[1].ff != trowsum[n-1].ff or tcolsum[1].ff != tcolsum[n-1].ff)
	{
		cout << -1;
		return 0;
	}

	if( trowsum[0].ff != tcolsum[0].ff )
	{
		cout << -1;
		return 0;
	}

	/*cout << "tr " << trowsum[0].ss << " tc " << tcolsum[0].ss << endl;
	for( int i = 0; i < n; i++ )
	{
		cout << rowsum[i] <<" "<<colsum[i] << " " << trowsum[i].ff <<" " << trowsum[i].ss << endl;
	}*/

	for ( int i = 0; i < n; i++ )
	{
		rdsum += sq[i][i];
		ldsum += sq[i][n-1-i];
	}

	if( rdsum != ldsum )
	{
		cout << -1;
		return 0;
	}
	if( rdsum != trowsum[1].ff )
	{
		cout << -1;
		return 0;
	}
	if( trowsum[0].ss != zi or tcolsum[0].ss != zj)
	{
		cout << -1;
		return 0;
	}

	ll int rep = 0;

	rep = trowsum[1].ff - trowsum[0].ff;

	if (rep == 0)
	{
		cout << -1;
		return 0;
	}
	cout << rep << endl;

	return 0;
}