#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int n, maxx, maxy;
	cin >> n;
	for ( int i = 0; i < n; i++)
	{
	    int temp1, temp2;
	    cin >> temp1 >> temp2;
	    if ( temp1 > maxx )
	        maxx = temp1;
	    if ( temp2 > maxy )
	        maxy = temp2;
	}
	int ma;
	if ( maxx > maxy )
	    ma = maxx;
	else
	    ma = maxy;
	cout << maxx << " " <<maxy <<" " << ma << endl;
	int w[n];
	
	for ( int i = 0; i < n; i++)
	{
	    cin >> w[i];
	}
	
	int poss[maxx + maxy + 1];
	
	int k = 1;
	int i = 0;
	while ( k <= maxx && k <= maxy )
	{
	    poss[i] = k++;
	    i++;
	}
	
    k = 1;
    int j = maxx + maxy;
    
    while ( k < maxx && k < maxy )
    {
        poss[j] = k++;
        j--;
    }
    
    k--;
    
    for ( int s = i; s < j; s++ )
    {
        poss[s] = k;
    }
    
    for ( int i = 0; i < maxx + maxy + 1; i++)
    {
        cout << poss[i] << " ";
    }
	return 0;
}
