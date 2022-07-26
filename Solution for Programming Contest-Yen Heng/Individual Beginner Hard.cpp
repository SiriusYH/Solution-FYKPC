#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,sum;
	vector<int>myvect; 
	cin >> n;
	if (n>=1 && n<=10000){
		for(x=1; x<n ;x++){
			if (n%x==0){
				myvect.push_back(x);
			}
			else continue;
		}
	}
	cout << accumulate(myvect.begin(),myvect.end(),0)<<endl;
}
