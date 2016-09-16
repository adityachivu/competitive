#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <set>
#include <bits/stdc++.h>

#define ll long long
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
	ll n, m;

	cin >> n >> m;

	vector<pair<ll, int> > a(n);
	vector<pair<int, pair<int, int> > > ext(m);
	ll out[n];
	int aux[n];

	memset(aux, 0, n);
	//memset(out, 0, n);
	for ( int i = 0; i < n; i++ )
	{
		out[i] = 0;
		aux[i] = 0;
		
	}

	ll rev;
	for ( int i = 0; i < n; i++ )
	{
		cin >> rev;
		a[i] = mp(rev, i);
	}

	


	int ch, len;

	for ( int i = 0; i < m; i++ )
	{
		cin >> ch;
		cin >> len;

		ext[i] = mp(len, mp(i, ch));

	}

	for( int i = 0; i < m; i++ )
	{
		cout << ext[i].first << " " << ext[i].second.first << " " << ext[i].second.second << endl;
	}
	cout << endl << endl;

	sort(ext.begin(), ext.end());
	reverse(ext.begin(), ext.end());
	int validm = m;
	int maxind = 0;
	for ( int i = 0; i < m; i++ )
	{
		if( ext[i].second.first > maxind )
		{
			maxind = ext[i].second.first;
		}
		else
		{
			ext[i].first = 0;
			validm--;
		}
	}

	for( int i = 0; i < m; i++ )
	{
		cout << ext[i].first << " " << ext[i].second.first << " " << ext[i].second.second << endl;
	}
	cout << endl << endl;


	sort(ext.begin(), ext.end());
	reverse(ext.begin(), ext.end());

	for( int i = 0; i < validm; i++ )
	{
		aux[ext[i].first-1] = ext[i].second.second;
		cout << ext[i].first << " " << ext[i].second.first << " " << ext[i].second.second << endl;
	}
	cout << endl << endl;

	int curr = 0;
	int min = 0, max = ext[0].first-1, ind;

	vector<pair<ll, int> > temp;
	cout << "maxim" << ext[0].first << endl;
	for ( int i = 0; i < ext[0].first; i++ )
	{
		temp.pb(a[i]);
	}
	sort(temp.begin(), temp.end());

	for ( int i = 0; i < validm; i++ )
	{
		cout << aux[i] << " ";
	}
	cout << endl << endl;

	for ( int i = 0; i < n; i++ )
		{
			cout << a[i].first <<" ";
		}
		cout << endl;
	for ( int i = 0; i < n; i++ )
		{
			cout << temp[i].first <<" ";
		}
		cout << endl << endl;


	for ( int i = n-1; i >= 0; i-- )
	{
		if(aux[i] != 0)
		{
			curr = aux[i];
		}
		if(curr == 0)
		{
			out[i] = a[i].first;
		}
		if( curr == 1)
		{
			out[i] = temp[max].first;
			max--;
		}
		if( curr == 2)
		{
			out[i] = temp[min].first;
			min++;
		}
		for ( int i = 0; i < n; i++ )
		{
			cout << out[i] <<" ";
		}
		cout << endl;
		for ( int i = 0; i < n; i++ )
		{
			cout << aux[i] <<" ";
		}
		cout << endl << endl;
	}

	for ( int i = 0; i < n; i++ )
	{
		cout << out[i] <<" ";
	}
	cout << endl;
	return 0;
}