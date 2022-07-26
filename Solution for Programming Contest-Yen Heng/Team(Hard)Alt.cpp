#include <bits/stdc++.h>
using namespace std;

int main() {
  const int mod = 1e9+7;
  unsigned long long int n;
  cin >> n;
  vector<unsigned long long int> dp(n+1,0);
  dp[0] = 1;
  for (long long int i = 1; i <= n; i++) {
    for (long long int j = 1; j <= 10 && i-j >= 0; j++) {
      (dp[i] += dp[i-j]) %= mod;
    }
  }
  cout << dp[n] << endl;
}
