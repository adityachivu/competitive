#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int n;
	int vx[4], vy[4];
	cin >> n;
	int t = n;
	for ( int i = 0; i < n; i++)
	{
	    cin >> vx[i] >> vy[i];
	}
	int area = 0;
	for ( int i = 0; i < n; i++)
	{
	    for ( int j = 0; j < n; j++)
	    {
	        if ( vx[i] != vx[j] && vy[i] != vy[j] )
	        {
	            cout << abs((vx[i] - vx[j])*(vy[i] - vy[j]));
	            return 0;
	        }
	    }
	}
	cout << -1;
	return 0;
}
