#include <bits/stdc++.h>

#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

using namespace std;
float dist(float x, float y)
{
	return sqrt(x*x+y*y);
}
float mindist(int x, int y, int r)
{
	float xfin, yfin;
	// int rx = r, ym = r;

	// if(x < 0)
	// 	rx = -1 * r;
	// if(y < 0)
	// 	ym = -1 * r;

	// if (x == 0)
	// {
	// 	xfin = 0;
	// 	yfin += ym;
	// 	return dist(xfin, yfin);
	// }

	float theta = atan2(y,x);

	yfin = y - r * sin(theta);
	xfin = x - r * cos(theta);

	return dist(xfin, yfin);
}

float maxdist(int x, int y, int r)
{
	float xfin, yfin;
	// int rx = r, ym = r;

	// if(x < 0)
	// 	rx = -1 * r;
	// if(y < 0)
	// 	ym = -1 * r;

	// if (x == 0)
	// {
	// 	xfin = 0;
	// 	yfin += ym;
	// 	return dist(xfin, yfin);
	// }

	float theta = atan2(y,x);

	yfin = y + r * sin(theta);
	xfin = x + r * cos(theta);

	return dist(xfin, yfin);
}
int main()
{
	int r, d, n;
	cin >> r >> d >> n;

	// cout << "pizza r:" << r << " d:" << d << endl;
	int count = 0;

	for( int i = 0; i < n; i++ )
	{
		int x, y, rad;
		cin >> x >> y >> rad;

		// cout << "x:" << x << "\ty:" << y << "\trad:" << rad << "\tmindist:" << mindist(x,y,rad) << "\t\tmaxdist:" << maxdist(x,y,rad) << "\t\tcenterdist:" << dist(x,y);

		// if(mindist(x,y,rad) >= r-d and maxdist(x,y,rad) <= r and dist(x,y) < r and dist(x,y) > r-d)
		// {
		// 	count++;
		// 	cout << "\tYES" <<endl;
		// }
		// else
		// {
		// 	cout << "\tNO" << endl;
		// }

		float distance = dist(x,y);
		if( distance >= r-d and distance <= r and distance-rad >= r-d and distance + rad <= r )
		{
			count++;
			// cout << "\tYES" <<endl;
		}
		else
		{
			// cout << "\tNO" << endl;
		}
	}

	cout << count << endl;

	return 0;
}