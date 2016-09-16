#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<ll> a;
	for ( int i = 0; i < n; i++ )
	{
		ll temp;
		cin >> temp;
		a.push_back(temp);
	}

	sort(a.begin(), a.end());
	for ( int i = 0; i < n; i++ )
	{
		//sum += a[i];
		//cout << a[i] << " ";
	}
	//cout << endl;

	bool flag = true;
	bool change = false;
	while ( flag )
	{
		for ( int i = n-1; i > 0; i-- )
		{
			if(a[i] == a[i-1] and a[i] != 0)
			{
				a[i-1]--;
				sort(a.begin(), a.end());
				change = true;
			}
			
		}
		if ( change )
		{
			change = false;
			continue;
		}
		else
		{
			flag = false;
		}
	}
	ll sum = 0;
	for ( int i = 0; i < n; i++ )
	{
		sum += a[i];
		//cout << a[i] << " ";
	}
	//cout << endl;
	cout << sum;

	return 0;
}