#include <iostream>
#include <vector>
using namespace std;
#define INF 0x7f7f7f7f
const int M = 100005;
int n,m;
vector<int> vec[M];
int dp[M],mi[M],c[M];

void dfs(int x,int minx,int p) {
	int f = 1;
	minx = min(c[x],minx);
	if(mi[x] > minx) 
		mi[x] = minx,f = 0;
	int maxx = max(dp[p],c[x]-minx);
	if(dp[x] < maxx) 
		dp[x] = maxx,f = 0;
	if(f) return;
	for(int i = 0; i < vec[x].size(); i++)
		dfs(vec[x][i],minx,x);
}
int main()
{
	cin >> n>> m;
	for(int i = 0; i < M; i++) mi[i] = INF;
	for(int i = 1; i <= n; i++)
		cin >> c[i];
	int t,t1,t2;
	for(int i = 1; i <= m; i++)
	{
		cin >>t >>t1 >>t2;
		vec[t].push_back(t1);
		if(t2 == 2)
			vec[t1].push_back(t); 
	}
	dfs(1,INF,0);
	cout << dp[n];
	return 0;
}
