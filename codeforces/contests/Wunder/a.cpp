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

	ll k = 1, count = 0;

	while ( n > 0 )
	{
		k = 1;
		count = 0;
		while ( k <= n )
		{
			k = k << 1;
			count++;
		}
		k /= 2;
		cout << count << " ";
		n -= k;
	}
	

	return 0;
}