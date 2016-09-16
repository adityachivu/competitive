#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int distance(pair<int, int> point, int x, int y )
{
	int a = abs(point.first - x);
	int b = abs(point.second - y);
	
	if ( a > b)
		return a;
	else
		return b;
}

int main()
{
	int t = 0;
	cin >> t;
	while( t-- )
	{
		int n, m;
		cin >> n >> m;

		//cout << ".\n";

		vector<int> house[n];
		string s;
		for (int i = 0; i < n; i++ )
		{
			cin >> s;
			//cout << ".\n";
			for ( int j = 0; j < m; j++ )
			{
				if ( s[j] == '*' )
				{
					house[i].push_back(j);
					//	cout << i << " " << j << endl;
				}
			}
		}
		//cout << ".\n";

		pair<int, int> start, mid, end;
		for ( int i = 0; i < n; i++ )
		{
			if ( house[i].empty() )
			{
				continue;
			}
			else
			{
				start.first = i;
				start.second = house[i][0];
				//cout << '\n' << start.first << " " << start.second << endl;
				break;
			}
		}
		//cout << ".\n";

		int max = 0;
		for ( int i = 0; i < n; i++ )
		{
			if ( house[i].empty() )
			{
				continue;
			}
			else
			{
				for ( int j = 0; j < house[i].size(); j++ )
				{
					int dist = distance(start, i, house[i][j]);
					if ( dist > max )
					{
						max = dist;
						mid.first = i;
						mid.second = house[i][j];
					}
				}
			}
		}
		//cout << '\n' << mid.first << " " << mid.second << endl;
		//cout << ".\n";

		max = 0;
		for ( int i = 0; i < n; i++ )
		{
			if ( house[i].empty() )
			{
				continue;
			}
			else
			{
				for ( int j = 0; j < house[i].size(); j++ )
				{
					int dist = distance(mid, i, house[i][j]);
					if ( dist > max )
					{
						max = dist;
						end.first = i;
						end.second = house[i][j];
					}
				}
			}
		}
		//cout << '\n' << end.first << " " << end.second << endl;
		//cout << ".\n";

		cout << (max/2) + 1 << endl;
	}
	
	return 0;
}