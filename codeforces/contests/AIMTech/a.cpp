#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int l, v1, v2, d;
	double ans;
	cin >> d >> l >> v1 >> v2;
	cout << setprecision(9) << (double)((double)(l - d)/(double)(v2 + v1));
	return 0;
}