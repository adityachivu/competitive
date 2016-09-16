#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
	int m, n;

	cin >> m >> n;

	int mby5 = m/5;
	int nby5 = n/5;
	int mrem = m%5;
	int nrem = n%5;

	int m5 = m - mrem;
	int n5 = n - nrem;

	ll ans =  (mby5+1)*(nby5+1)*5;

	int d = abs(mrem-nrem);
	if(mrem>nrem)
	{
		ans += d*nby5;
	}
	else
	{
		ans += d*mby5;
	}

	cout << ans;

	return 0;
}