#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> vertex[n];

	for ( int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		vertex[a].push_back(b);
		vertex[b].push_back(a);
	}

	vector<int> size;
	for ( int i = 0; i < n; i++ )
	{
		size.push_back(vertex[i].size());
	}

	sort(size.begin(), size.end());

	bool flag = false;
	int s1, s2, c1, c2;
	s1 = size[0];
	for ( int i = 0; i < n-1; i++ )
	{
		if( size[i] != size[i+1] )
		{
			if ( flag )
			{
				cout << "No";
				return 0;
			}
			else
			{
				flag = true;
				c1 = i+1;
				s1 = size[i];
				c2 = n-c1;
				s2 = size[i+1];
			}
		}		
	}

	if ( flag )
		if( c1 == s2 and c2 == s1 )
		{
			cout << "Yes";
			return 0;
		}
	if ( !flag )
	{
		if ( n%2 == 0 and s1 == n/2 )
		{
			cout << "Yes";
			return 0;
		}
		else
		{
			cout << "No";
			return 0;
		}
	}

	cout << "No";

	return 0;
}