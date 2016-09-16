#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

#define ll long long
#define mp make_pair
#define pb push_back

using namespace std;

int total = 0;
int solution( int a, int b )
{
	if ( a==0 or b==0 )
		return 0;
	else
	{
		total += a/2;
		return solution( b+(a/2), 1 );
	}

}
int main()
{
	ll n, m, k;

	ll a, b, c;

	ll a1, a2;
	int tog = 1;
	int count = 0;

	cin >> a1 >> a2;

	if ( a1 < a2 )
	{
		cout << solution(a2, a1);
	}
	else
	{
		cout << solution(a1, a2);
	}

	



	return 0;
}
