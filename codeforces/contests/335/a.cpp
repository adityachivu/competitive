#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	int a, b, c;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	
	int flag = 1;
	/*while ( a >= x or b >= y or c >= z )
	{
	    if ( x != 0 )
	    {
	        if ( b > y )
	        {
	            x--;
	            y += 2;
	        }
	        else if ( c > z )
	        {
	            x--;
	            z += 2;
	        }
	    }
	    else if ( y != 0 )
	    {
	        if ( a > x )
	        {
	            y--;
	            x += 2;
	        }
	        else if ( c > z )
	        {
	            y--;
	            z += 2;
	        }
	    }
	    else if ( z != 0 )
	    {
	        if ( b > y )
	        {
	            z--;
	            y += 2;
	        }
	        else if ( a > x )
	        {
	            z--;
	            x += 2;
	        }
	    }
	    else if ( a == x and b == y and c == z )
	    {
	        cout << "Yes";
	        return 0;
	    }
	    else
	    {
	        cout << "No";
	        return 0;
	    }
	}
	*/
	
	if ( (a+b+c-x-y-z)%2 == 0)
	    cout << "Yes";
	else
	    cout << "No";
	return 0;
}
