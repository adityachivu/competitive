#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int t;
	
	cin >> t;
	
	while ( t-- )
	{
	    cin >> s;
	    int len =  s.length();
	    for ( int i = 0; i < len/2; i += 2 )
	    {
	        cout << s[i];
	    }
	    cout << endl;
	}
	return 0;
}
