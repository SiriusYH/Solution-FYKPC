#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>> x; //get the target number you want to sum until
	//C(1)= 1, C(2)=6=2*3,C(3)=15=3*5,C(n)=(n+1)(2n+1)
	int total=0;
	for(int n=0;n<x;n++){
		total += (n+1)*(2*n+1); //or can be written as (1/6)*(n+1)*(n+2)*(n+3)
	}
	cout<< total<<endl;
	return 0;
}
