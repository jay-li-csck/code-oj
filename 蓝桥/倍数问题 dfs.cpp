#include <iostream>
using namespace std;
int n,k,ans = 0;
int temp[3],nums[100001],vis[100001] = {0};
void dfs(int s) 
{
	if(s == 3) {
		int t = temp[0]+temp[1]+temp[2];
		if(t%k == 0 && t > ans) {
			ans = t;
		}
		return ;
	}
	else {
		for(int i = 0; i < n; i++) {
			if(!vis[i]) {
				temp[s] = nums[i];
				vis[i] = 1;
				dfs(s+1);
				vis[i] = 0;
			}
		}
	}
}
int main() 
{
	cin >> n >> k;
	for(int i = 0; i < n;i++ ) 
		cin >> nums[i];
	dfs(0);
	cout << ans;
	return 0;
}
