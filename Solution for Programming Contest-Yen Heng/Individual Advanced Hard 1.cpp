#include <bits/stdc++.h>
using namespace std;

int const N=90+3;
long long dp[N];
long long int sum=0; 
long long int n,num;
int const D=1e6+1;
long long dp2[D];

int main(){
	
	dp[1]=1;
	dp[2]=1;
	for (int i=(3); i < (N); ++i){
		dp[i]=dp[i-1]+dp[i-2];
	}
	cin>>n;
	vector<int>vect;
	for (int i=0; i<n; i++){
		cin>>num;
		if (num>0&&num<92)vect.push_back(num);
	}
	for(int x:vect){
		if (x%2==0){
			sum += dp[x];
		}
		else{
			sum -= dp[x];
		}
	}
	sum=abs(sum);
	cout << sum<<endl;
	int y = sum%108;
	
	dp2[0]=1;
	for(int i=1; i<y+1; ++i)
	{
		dp2[i]=0;
		for(int j=1; j<20+1; ++j)
		{
			if(i-j<0)continue;
			dp2[i]+=dp2[i-j];
		}
	}
	cout<<dp2[y]<<endl;
	return 0;

}
