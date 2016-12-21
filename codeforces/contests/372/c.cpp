#include <bits/stdc++.h>

#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair

using namespace std;

ll int gcd(ll int a, ll int b)
{
	if(b == 0)
		return a;
	return (gcd(b, a%b));
}
int main()
{
	int n;
	cin >> n;

	ll int num = 2;
	int lev = 1;

	for(int i = 1; i <= n; i++)
	{
		//ll int gc = __gcd((lev+1)*(lev+1), lev*lev);
		ll int temp = lev*(lev+1)*(lev+1);
		//temp *= (lev+1)*(lev+1);

		//cout << gc  << " " << temp << " " << (temp-num) << " . ";
		cout << temp - (num/lev) << endl;

		num = temp/(lev+1);
		lev++;
	}



	return 0;
}