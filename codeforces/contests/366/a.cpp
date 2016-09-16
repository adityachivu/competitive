#include<bits/stdc++.h>
#define X first
#define Y second
#define ll long long 
#define lim 100005
#define pb push_back
#define mk make_pair
#define pll pair<ll,ll>

using namespace std;

int main(void)
{
	ll a,b,c,d,e,n,m,k;
	ll abc[lim];
	cin>>n;
	//for(a=0;a<n;a++)
	//	cin>>abc[a];
	string s="I hate ";
	string r="I love ";
	for(a=0;a<n;a++)
	{

		if(a%2==0)
			cout<<s;
		else
			cout<<r;
		if(a<n-1)
		cout<<"that ";
	}
	cout<<"it";

	return 0;
}