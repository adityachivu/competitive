#include <bits/stdc++.h>

#define ff first
#define ll long long
#define ss second
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
	int m, n, k;

	double a, b, x, y, v;

	cin >> a >> b >> n;

	double mint = 1000;
	for ( int i = 0; i < n; i++ )
	{
		cin >> x >> y >> v;
		double temp = abs(sqrt((x-a)*(x-a) + (y-b)*(y-b)));

		temp = (double)((double)temp/ (double)v);
		if(temp<mint)
		{
			mint = temp;
		}
	}

	cout << setprecision(9) << mint;

	return 0;
}