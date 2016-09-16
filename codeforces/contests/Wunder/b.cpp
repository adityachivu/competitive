#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin >> n;

	int a[n][n];
	vector<int> p(n, 0);
	vector<int> max(n, 0);

	for ( int i = 0; i < n; i++ )
	{
		for ( int j = 0; j < n; j++ )
		{
			cin >> a[i][j];
			if ( max[i] < a[i][j] )
			{
				max[i] = a[i][j];
			}

		}
	}
	/*for ( int i = 0; i < n; i++ )
	{
		cout << max[i] << " ";
	}
	cout << endl;*/
	int currmax = 1;

	for ( int i = 0; i < n; i++ )
	{
		for ( int j = 0; j < n; j++ )
		{
			if ( max[j] <= currmax )
			{
				p[j] = currmax;
				max[j] = n+1;
				currmax++;
				/*for ( int i = 0; i < n; i++ )
				{
					cout << max[i] << " ";
				}
				cout << endl;
				for ( int i = 0; i < n; i++ )
				{
					cout << p[i] << " ";
				}
				cout << endl << endl;*/
				break;
			}
			
		}
	}
	/*cout << endl << endl;
	for ( int i = 0; i < n; i++ )
	{
		cout << max[i] << " ";
	}
	cout << endl;*/
	for ( int i = 0; i < n; i++ )
	{
		cout << p[i] << " ";
	}
	return 0;
}