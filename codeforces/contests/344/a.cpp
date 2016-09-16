#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <set>

#define ll long long int
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
	unsigned ll n, m, k, temp, suma = 0, sumb = 0;

	

	cin >> n;
	unsigned ll a, b;

	for ( int i = 0; i < n; i++ )
	{
		cin >> a;
		suma = suma | a;
	}

	for ( int i = 0; i < n; i++ )
	{
		cin >> b;
		sumb = sumb | b;
	}

	cout << suma + sumb;
	return 0;
}