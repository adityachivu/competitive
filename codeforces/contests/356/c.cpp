#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define fl cout << endl;
#define ff first
#define ss second
#define ll long long

using namespace std;

int main()
{
	int m, n, k;

	int p[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

	int count = 0;
	int num = 1;
	int i = 0;
	string resp;
	for( int i = 0; i < 15; i++ )
	{
		cout << p[i] << endl;
		cin >> resp;
		if(resp[0]=='y')
		{
			count = 1;
			num = p[i];
		}
	}

	if (count == 0)
	{
		cout << "prime" << endl;
		return 0;
	}

	for( int i = 0; i < 4;i++)
	{
		if(num*p[i] <= 100)
		{
			cout << num*p[i] << endl;
			cin >> resp;
			if(resp[0]=='y')
			{
				cout << "composite";
				return 0;
			}
		}
	}


	cout << "prime" << endl;
	return 0;
}