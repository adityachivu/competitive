#include <iostream>
using namespace std;

int main() {
	
	int l, c, t, p, tog;
	
	cin >> t;
	
	while ( t-- )
	{
	    cin >> l >> c;
	    tog = 1;
	    while ( l-- )
	    {
	        p = c;
	        while ( p-- )
	        {
	            if ( tog )
	                cout << '*';
	            else
	                cout << '.';
	                
	            tog ^= 1;
	            
	            
	        }
	        
	        if ( c%2 == 0 )
	            tog ^= 1;
	        cout << endl;
	    }
	    cout << endl;
	}
	return 0;
}
