#include <iostream>
using namespace std;

int main() {
	
	int l, c, t, p, tog;
	
	cin >> t;
	
	while ( t-- )
	{
	    cin >> l >> c;
	    tog = 1;
	    for ( int i = 0; i < l; i++ )
	    {
	        for ( int j = 0; j < c; j++ )
	        {
	            if ( i > 0 and i < l - 1 )
	            {
	                if ( j > 0 and j < c - 1 )
	                {
	                    cout << '.';
	                }
	                else
	                    cout << '*';
	            }
	            else
	                cout << '*';
	        }
	        cout << endl;
	    }
	            
	    cout << endl;
	}
	return 0;
}
