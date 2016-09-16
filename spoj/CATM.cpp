#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

float manhattanDistance ( pair <int, int> l1 , pair <int, int> l2 )
{
	float distance = abs(l1.first - l2.first) + abs(l1.second - l2.second);
	return distance;
}


int main()
{
	int m, n;
	pair <int, int> cat1, cat2, mouse, loc;

	cin >> mouse.first >> mouse.second;

	int mouseesc = mouse.first>mouse.second?mouse.second:mouse.first;

	return 0;
}