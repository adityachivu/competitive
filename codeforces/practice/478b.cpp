#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define ins insert
#define iOS ios::sync_with_stdio(false)
#define all(x) x.begin(),x.end()

using namespace std;

int main()
{
	iOS;

	ll int n, m, min, max;

	cin >> n >> m;

	max = (n-m)*(n-m+1)/2;
	min = (m-1)*(((n/m)*(n/m)-1)/2) + ((n/m+n%m)*(n/m+n%m-1)/2);

	cout << min << " " << max << endl;


	return 0;
}