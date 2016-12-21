#include <bits/stdc++.h>

#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
	int a, b, c, n, k;


	
	cin >> n;
	char m[n];
	int sum = 0, rcount = 0, bcount = 0;
	for( int i = 0; i < n; i++ )
	{
		cin >> m[i];
		if(m[i] == 'r' )
		{
			rcount++;
		}
		else
		{
			bcount++;
		}
	}


	bool flag = false;
	if( rcount > bcount )
	{
		flag = true;
		if( m[n-1] != m[0] )
			sum++;
		else if( m[0] == 'b' )
			sum += 2;
	}
	else if( bcount > rcount )
	{
		if( m[n-1] != m[0] )
			sum++;
		else if( m[0] == 'r' )
			sum += 2;

	}

	int temp = 1;
	for( int i = 1; i < n; i++ )
	{
		//cout << i << " " << (char)m[i] << " " << temp << endl;
		if(flag)
		{
			if( m[i] == 'b' and m[i-1] == 'b' )
				temp++;
			else
			{
				sum += temp/2;
				//cout << temp << endl;
				temp = 1;
			}
		}
		else
		{
			if( m[i] == 'r' and m[i-1] == 'r' )
				temp++;
			else
			{
				sum += temp/2;
				temp = 1;
			}
		}
	}

	sum += temp/2;
	sum += abs((int)((rcount - bcount)/2));


	//cout << rcount << " " << bcount << " " << sum <<endl;
	cout << sum << endl;





	return 0;
}