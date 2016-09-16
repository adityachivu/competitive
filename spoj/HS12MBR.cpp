#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while ( t-- )
	{
	    int n, maxx = -1000, maxy = -1000, minx = 1000, miny = 1000;
	    cin >> n;
	    
	    while ( n-- )
	    {
	        char o;
	        int x, y, r, x2, y2;
	        
	        cin >> o;
	        switch(o)
	        {
	            case 'p':{
	                        cin >> x >> y;
	                        if ( x > maxx )
	                            maxx = x;
	                        if ( x < minx )
	                            minx = x;
	                        if ( y > maxy )
	                            maxy = y;
	                        if ( y < miny )
	                            miny = y;
	                     }break;
	            case 'c':{
	                        cin >> x >> y >> r;
	                        if ( (x+r) > maxx )
	                            maxx = x + r;
	                        if ( (x-r) < minx )
	                            minx = x - r;
	                        if ( (y+r) > maxy )
	                            maxy = y + r;
	                        if ( (y-r) < miny )
	                            miny = y - r;
	                     }break;
	            case 'l':{
	                        cin >> x >> y >> x2 >> y2;
	                        if ( x > maxx )
	                            maxx = x;
	                        if ( x < minx )
	                            minx = x;
	                        if ( y > maxy )
	                            maxy = y;
	                        if ( y < miny )
	                            miny = y;  
	                        
	                        
	                        if ( x2 > maxx )
	                            maxx = x2;
	                        if ( x2 < minx )
	                            minx = x2;
	                        if ( y2 > maxy )
	                            maxy = y2;
	                        if ( y2 < miny )
	                            miny = y2;
	                     }break;
	        }
	        
	        cout << minx << ' ' << miny << ' ' << maxx << ' ' << maxy << endl;
	    }
    }
	return 0;
}
