#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int h,w;
	long double x;
	cin >>h>> w;
	x = sqrt((h*h)+(w*w));
	cout<<setprecision(4)<< fixed<< x;
	return 0;
}
