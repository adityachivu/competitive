#include<bits/stdc++.h>
#define X first
#define Y second
#define ll long long 
#define lim 100005
#define pb push_back
#define mk make_pair
#define pll pair<ll,ll>

using namespace std;

ll ans(ll a)
{
 	ll b,c,d;
 	b=a;
 	c=0;
 	while(b>0)
 	{
 		b/=2;
 		c++;
 	}
 	return c;
}

int main(void)
{
	ll a,b,c,d,e,n,m,k;
	ll abc[lim];
	cin>>n;
	ll sum=-1;
	ll ct=0;
	for(a=0;a<n;a++)
	{
		cin>>abc[a];
		if(abc[a]%2==0)
		ct++;
		if(ct%2)
			cout<<1<<endl;
		else
			cout<<2<<endl;

	}
		


	return 0;
}