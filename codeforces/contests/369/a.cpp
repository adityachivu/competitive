#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define us unsigned

int main()
{
	int n;
	cin >> n;

	vector<string> bus;
	string s;
	bool flag = true;

	for( int i = 0; i <n; i++ )
	{
		cin >> s;
		

		if(s[0] == s[1] and s[0] == 'O')
		{
			if(flag)
			{
				s[0] = '+';
				s[1] = '+';
				flag = false;
			}
		}
		else if( s[3] == s[4] and s[3] == 'O')
		{
			if(flag)
			{
				s[3] = '+';
				s[4] = '+';
				flag = false;
			}
		}
		bus.pb(s);

	}

	if(flag)
	{
		cout << "NO" << endl;

	}
	else
	{
		cout << "YES" << endl;
		for(int i = 0;i < n; i++)
		{
			cout << bus[i] << endl;
		}
	}





	return 0;
}