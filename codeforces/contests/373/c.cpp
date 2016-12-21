#include <bits/stdc++.h>

#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair

using namespace std;

ll int update( vector<int>& ind, int dec[], ll int t )
{
	int curr = dec[t];
	ll int i = t;
	while (curr >= 5)
	{

	}
}
int main()
{
	int a, b, c, n, k;



	cin >> n;
	char dec[n];
	stack<int> ind;

	ll int t;
	cin >> t;

	bool flag = false;
	int lastind = n;
	for( int i = 0; i < n; i++ )
	{
		cin >> dec[i];
		if( dec[i] == '.' )
		{
			flag = true;
			decind = i;
		}
		else if((dec[i]-'0') >= 5 and flag == true)
		{
			ind.push(i);
		}
	}


	while( ind.size() > t and not ind.empty())
		ind.pop();

	while( not ind.empty() )
	{

		int idc = ind.top();
		int curr = dec[idc];
		ind.pop();

		dec[idc] = 0;
		dec[idc-1]++;
		curr = dec[--idc];

		while( true )
		{
			
			dec[idc--] = 0;
			if( dec[idc] != 9)
				break;
			dec[idc]++;
			if(idc < ind.top() and not ind.empty())
				ind.pop();
		}
		

	}
	


	




	return 0;
}