#include <bits/stdc++.h>
using namespace std; 
//bottom-up dp
const int mod = 1e9+7;
int main()
{
	int n;
	cin>>n;
	vector<unsigned long long int>dp(n+1,0);
	dp[0]=1;
	for(long long int i=1; i<n+1; ++i)
	{
		dp[i]=0;
		for(long long int j=1; j<10+1; ++j)
		{
			if(i-j<0)continue;
			(dp[i] += dp[i-j]) %= mod;
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}
