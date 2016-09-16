#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int mark[7] = {0};
void dec(int a)
{
	for ( int i = a-1; )
}
int main() {
	long long int f[7];
	int n;

	long long int tim;

	cin >> n >> f[0] >> f[1] >> f[2];
	f[6] = f[0] + f[1] + f[2];
	f[5] = f[0] + f[1];
	f[4] = f[0] + f[2];
	f[3] = f[1] + f[2];
	vector< long long int> crim;

	for ( int i = 0; i < n; i++ )
	{
		long long int temp;
		cin >> temp;
		if ( temp > f[6])
		{
			cout << -1;
			return 0;
		}
		crim.push_back(temp);
	}

	sort(crim.begin(), crim.end());
	reverse(crim.begin(), crim.end());
	sort(f, f+7);
	reverse(f, f+7);

	
	int k = 0;
	for ( int i = 6; i > 0; i-- )
	{
		while(crim[k] >= f[i])
		{
			k++;
		}
		mark[i] = k;
	}


	for ( int i = 0; i < n; i++ )
	{
		cout << crim[i] << " ";
	}
	cout << endl;
	for ( int i = 0; i < 7; i++ )
	{
		cout << f[i] << " ";
	}
	cout << endl;


	return 0;
}