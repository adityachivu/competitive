#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int a, b, temp = 1, num = 1;

	cin >> a >> b;


	long long int sum = 0;
	for ( int i = 1; i < 60; i++)
	{
		temp <<= 1;
		temp++;
		num = temp-1;
		for ( int j = 0; j < i; j++)
		{
			if ( num >= a and num <= b)
			{
				sum++;
			}
			num <<= 1;
			num++;
			num &= temp;
		}

	}
	//cout << dig1 << " " << dig2 << endl;
	//cout << sum << endl;

	


	
	//cout << endl;
	cout << sum << endl;
	return 0;
}