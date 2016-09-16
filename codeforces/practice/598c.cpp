#include <iostream>
#include <string.h>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    vector<pair<pair<float,float>,int> > q1, q2, q3, q4;
    pair<float,float> temp;
    pair<pair<float,float>,int> t;
    int n;
    cin >> n;
    /*q1.resize(n);
    q2.resize(n);
    q3.resize(n);
    q4.resize(n);*/
    for ( int i = 0; i < n; i++ )
    {
        int x, y;
        cin >> x >> y;
        
        
        temp.first = x/sqrt(x*x + y*y);
        temp.second = y/sqrt(x*x + y*y);
       
        t.first = temp;
        t.second = i+1;
        
        if ( x > 0 && y > 0 )
            q1.push_back(t);
        else if ( x < 0 && y > 0 )
            q2.push_back(t);
        else if ( x < 0 && y < 0 )
            q3.push_back(t);
        else if ( x > 0 && y < 0 )
            q4.push_back(t); 
    }
    
    sort(q1.begin(), q1.end());
    sort(q2.begin(), q2.end());
    sort(q3.begin(), q3.end());
    sort(q4.begin(), q4.end());
    
    float min = 1;
    for ( vector<pair<pair<float,float>,int> >::iterator it = q1.begin()+1; it != q1.end();)
    {
        t = *it;
        t1 = *(++it);
        temp = t.first;
        
        float tem = temp.first
    }
    
    
    return 0;
}
