#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;	
	int dp[n] = {0};
	int v[n] = {0};
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> v[i];
		dp[i] = dp[i-1] + v[i];//dp【i】 为0-i 的和 
	}
	int sum = 0;
	for(int i = 1 ; i <= n ; i++){
		//循环减去前面的区间  d【j】 为0-j的和 
		for(int j = 0 ; j <= n-i ; j++)
		{
			if((dp[i] - dp[j])%k == 0)
				sum++;
		}
	}
	cout << sum;
	return 0;
}
