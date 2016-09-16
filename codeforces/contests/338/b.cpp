#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <stack>
#define ll long long
#define EL cout << endl;
#define SP << ". " <<  
using namespace std;

int main()
{
	ll n, m, k, l, a, b, c;
	
	
	cin >> n >> m;
	vector<long> node[n+1];
	vector<bool> visited (n, false);
	vector<int> length(n, 0);
	for ( int i = 0; i < m; i++ )
	{
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	//cout SP endl;
	for ( int i = 1; i < n; i++ )
	{
		sort(node[i].begin(), node[i].end());
	}
	//cout SP endl;
	/*for ( int i = 1; i < n; i++ )
	{
		for ( int j = 0; j < node[i].size(); j++ )
		{
			cout << node[i][j] << ' ';
		}
		EL
	}*/
	int max = 0, sum = 0, tail;
	int curr = 1;
	
	stack<int>  dfs;
	dfs.push(curr);
	int len = 0;
	visited[1] = true;
	
	while ( sum <= n )
	{
		//cout << "hello";
		//EL
		if ( len > max )
		{
			max = len;
			tail = curr;
		}
		len = 0;
		while( !dfs.empty() )
		{
			
			curr = dfs.top();
			//cout SP curr << endl;
			dfs.pop();
			len = length[curr];
			int i = 0;
			for ( i = 0; i < node[curr].size(); i++ )
			{
				int temp = node[curr][i];
				if( temp < curr)
				{
					continue;
				}
				else
				{					
					if ( length[temp] < len and visited[temp] )
					{
						continue;
					}
					else
					{
						dfs.push(temp);
						length[temp] = len + 1;
					}
				}

			}

			if ( !visited[curr] )
				sum++;
			visited[curr] = true;
			
			len++;
			
		}
		
		int v = 0;
		while ( visited[v] and v < n)
			v++;
		if ( !visited[v] and v < n)
			dfs.push(v);
		else
			break;
		
	}
	
	cout << max * node[tail].size();
	return 0;
}