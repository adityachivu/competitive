#include <bits/stdc++.h>

#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
	int a, b, c, n, k;



	cin >> n;

	if( n == 1 )
	{
		cin >> k;
		if(k == 15)
		{
			cout << "DOWN" << endl;
			return 0;
		}
		if(k == 0)
		{
			cout << "UP" << endl;
			return 0;
		}
		cout << -1 << endl;;
		return 0;
	}
	int m[n];
	for( int i = 0; i < n; i++ )
	{
		cin >> m[i];

	}

	if( m[n-2] < m[n-1])
	{
		if( m[n-1] != 15 )
			cout << "UP" << endl;
		else
			cout << "DOWN" << endl;
	}
	else
	{
		if( m[n-1] == 0 )
			cout << "UP" << endl;
		else
			cout << "DOWN" << endl;
	}




	return 0;
}