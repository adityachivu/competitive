#include <iostream>
using namespace std;

long int max( long int a , long int b)
{
	if ( a > b )
		return a;
	else
		return b;
}

int main() {
	long int m[5], w[5], hs, hu;
	
	for ( int i = 0; i < 5; i++ )
	{
		cin >> m[i];
	}
	for ( int i = 0; i < 5; i++ )
	{
		cin >> w[i];
	}
	cin >> hs >> hu;
	
	int ans = 0 ;
	
	for ( int i = 0; i < 5; i++)
	{
		ans += max ( 75 * 500 * (i+1), ((250 - m[i]) * 500 * (i+1)) - (12500 * w[i]));
	}
	
	ans += 100 * 250 * hs;
	ans -= 50 * 250 * hu;
	ans /= 250;
	cout << ans;
	
	return 0;
}
