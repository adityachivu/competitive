#include <bits/stdc++.h>

#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
	string s;
	cin >> s;

	int count = 0;
	bool flag = false;
	if(s.length() < 26)
	{
		cout << -1;
		return 0;
	}

	/*
	int numques = 0, numalph = 0;
	int count[26] = {0};
	for( int i = 0; i < 26; i++ )
	{
		if( s[i] == '?' )
		{
			numques++;
		}
		else
		{
			if( count[s[i]-'A'] == 0)
			{
				count[s[i]-'A']++;
				numalph++;
			}
		}
	}

	cout << numques << "." << numalph << endl << endl;

	int update = 0;
	bool flag = false;
	for( int i = 26; i < s.length(); i++ )
	{
		if( numques + numalph == 26 )
		{
			flag = true;
			update = i-26;
			break;
		}


		if( s[i] == '?' )
		{
			if( s[i-26] != '?' )
				numques++;
			else
			{				
				if( count[s[i-26]-'A'] == 1 )
					numalph--;
				count[s[i-26]-'A']--;
			}	
		}
		else
		{
			if( count[s[i]-'A'] == 0 )
				numalph++;
			if( count[s[i-26]-'A'] == 1 )
				numalph--;

			count[s[i]-'A']++;
			count[s[i-26]-'A']--;
		}

		cout << numques << "." << numalph << endl;
	}

	int present[26] = {0};
	cout << update << endl;
	for( int i = update; i < 26; i++ )
	{
		present[s[i]-'A'] = true;
	}
	for( int i = update; i < 26; i++ )
	{
		if( s[i] == '?' )
		{
			int k = 0;
			while( present[k] == false )
				k++;
			s[i] = k+'A';
			present[k] = true;
		}
	}
	for( int i = 0; i < s.length(); i++ )
	{
		if( s[i] == '?' )
		{
			s[i] = 'Z';
		}
	}*/

	bool present[26] = {false};
	int update = 0;
	for( int i = 0; i < s.size() - 26; i++ )
	{
		for(int l=0; l < 26; l++) present[l] = false;
		int numq = 0;
		int numalph = 0;
		
		for( int k = i; k < i+26; k++ )
		{
			if( s[k] == '?' )
			{
				numq++;
			}
			else
			{
				int ch = s[k] -'A';
				if( not present[ch] )
				{
					present[ch] = true;
					numalph++;
				}
			}
		}

		if( numalph + numq == 26 )
		{
			update = i;
			flag = true;
		}
	}

	if( flag )
	{
		for( int i = update; i < update+26; i++ )
		{
			if( s[i] == '?' )
			{
				int k = 0;
				while( present[k] and k < 26 )
					k++;
				s[i] = k + 'A';
			}
		}
		for( int i = 0; i < s.length(); i++ )
		{
			if( s[i] == '?' )
			{
				s[i] = 'Z';
			}
		}
		cout << s << endl;
	}
	else
	{
		cout << -1 << endl;
	}

	return 0;
}