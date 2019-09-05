#include <bits/stdc++.h>
using namespace std;
/*
这是扩展欧几里德变形的，如果满足所有数的最大公约数不为1
则有无穷个，否则都是有限个。然后利用完全背包就可以统计了。
*/
const int N = 10010;
int n;
int gcd(int a,int b)
{
	return b == 0 ? a:gcd(b,a%b);
}

int main()
{
	int dp[N] = {0};	
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++)
		cin >> v[i];
	int g = v[0];
	for(int i = 1 ; i < n ; i++)
		g = gcd(g,v[i]);
	if(g != 1){
		printf("INF\n");
		return 0;
	}
	
	dp[0] = 1;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j+v[i] < N ; j++)
		{ // 标记 
			if(dp[j])
				dp[j+v[i]] = 1;
		}
	int ans=0;
    for(int i = 0 ; i < N ; i++)
    {
        if(dp[i]!=1){
            ans++;
            cout << i << " ";
		}
    }
    printf("%d\n",ans);
	return 0;
} 
