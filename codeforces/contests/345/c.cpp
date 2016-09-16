#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

#define ll long long
#define mp make_pair
#define pb push_back

using namespace std;

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second < right.second;
    }
};
int main()
{
	ll n, m, k;

	ll a, b, c;

	ll total;
	int tog = 0;

	vector<pair<ll, ll> > watch;
	set<pair<ll, ll> > u;

	cin >> n;
	for ( int i = 0; i < n; i++)
	{
		cin >> a >> b;
		watch.pb(mp(a,b));
	}
	for ( int i = 0; i < n; i++ )
	{
		cout << watch[i].first << watch[i].second << endl;
	}
	cout << endl << endl;

	sort(watch.begin(), watch.end());
	for ( int i = 0; i < n; i++ )
	{
		cout << watch[i].first << watch[i].second << endl;
	}
	cout << endl << endl;
	
	ll curr = watch[0].first;
	total = 0;
	for ( int i = 1; i < n; i++ )
	{
		
		b = 1;
		
		while( watch[i].first == curr )
		{
			b++;
			i++;
		}
		
		total += (b * (b-1))/2;
		curr = watch[i].first;
	}

	cout << total << endl;
	sort(watch.begin(), watch.end(), sort_pred());

	for ( int i = 0; i < n; i++ )
	{
		cout << watch[i].first << watch[i].second << endl;
	}
	cout << endl << endl;
	curr = watch[0].second;
	for ( int i = 1; i < n; i++ )
	{
		
		b = 1;
		while( watch[i].second == curr )
		{
			
			b++;
			i++;
		}
		
		total += (b * (b-1))/2;
		curr = watch[i].second;
	}

	for ( int i = 0; i < n; i++ )
	{
		u.insert(watch[i]);
	}


	cout << total - (watch.size() - u.size());

	return 0;
}
