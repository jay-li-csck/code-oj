#include <iostream>
using namespace std;

int main()
{
//  总金额 物品数  价格 重要度   使每件物品的价格与重要度的乘积的总和最大
	int n,m,v[1000],w[1000],dp[1000] = {0};
	cin >> n >> m;
	for(int i = 0; i < m; i++)
		cin >> v[i] >> w[i];
	for(int i = 0; i < m; i++) 
		for(int j = n; j >= v[i] ;j--) 
			dp[j] = dp[j] > dp[j-v[i]]+v[i]*w[i]?dp[j] : dp[j-v[i]]+v[i]*w[i];
	
	
	cout << dp[n]; 
	
	
}
