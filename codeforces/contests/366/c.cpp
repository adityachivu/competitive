#include<bits/stdc++.h>
#define X first
#define Y second
#define ll long long
#define lim 300005
#define pb push_back
#define mk make_pair
#define pll pair<ll,ll>

using namespace std;

int main(void)
{
	ll a,b,c,d,e,n,m,q,k;
	ll abc[lim];
	ll count[lim];
	//bool mark[lim];
	ll curr_max=0;
	ll prev_max=0;
	cin>>n>>q;
	ll tot = 0;
	vector<ll> v;
	ll ans=0;
	ll i=0;
	ll ts[lim];
	for(a=0;a<q;a++)
	{
		cin >> k >>c;
		if(k==1)
		{
			v.pb(c);
			ans++;
			count[v[i]]++;
			i++;
		}
		else if(k==2)
		{
			ans-=count[c];
			ts[c]=i;
			count[c]=0;
		}
		else
		{
			if(c>curr_max)
			{
				prev_max=curr_max;
				curr_max=c;
			}
			else
			{
				cout<<ans<<endl;
				continue;
			}

			for(b=prev_max;b<curr_max;b++)
			{
				
				if(ts[v[b]] < c and b >= ts[v[b]])
				{
					
					ts[v[b]] = b;
					//cout<<ts[v[b]] << "." << v[b]<<". "<<count[v[b]]<<endl;
					count[v[b]]--;
					ans--;

				}
			}			
		}
		cout<<max(0LL,ans)<<endl;
	}
	return 0;
}