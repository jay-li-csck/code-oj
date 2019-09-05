#include <iostream>
using namespace std;
int a[21];
bool vis[21];
int k,n;
long long ans = 0;
bool prime(int j) {
	for(int i = 2; i*i <= j; i++) {
		if(j%i == 0) {
			return false;
		}
	}
	return true;
}

void dfs(int st,int sum, int m) {
	if(st == k) {
	//cout << x << " ";
		if(prime(sum)) {
			ans++;
		}
		return ;
	}
	for(int i = m; i < n; i++ )
	{
		if(vis[i]) 
			continue;
		vis[i] = true;			
		dfs(st+1,sum+a[i],i+1);
		vis[i] == false;
	}
	return ;
}
/*int rule(int left_sum,int sum,int st,int end) 
{	
	if(left_sum == 0) {
		return prime(sum);
	}
	int ans = 0;
	for(int i = st; i <= end; i++)
		ans += rule(left_sum-1,sum+a[i],i+1,end);
	return ans;
}*/
int main()
{
	cin >> n >> k;

	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	dfs(0,0,0);cout << ans;
	//cout << rule(k,0,0,n-1);
	return 0;
} 
