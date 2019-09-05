#include <iostream>
#include <string.h>
using namespace std;
// 30 个灯 从最左边考虑
// 左边没开可以选 0 1
// 开了只能选 0 不开   
int ans = 0;
int a[31];
void dfs(int i) {
	if(i == 30) {
		ans++;
		return ;
	}
	else {
		if(i == 0 || a[i-1] == 0) {
			for(int j = 0; j < 2; j++) {
				a[i] = j;
				dfs(i+1);
				a[i] = 0;
			}
			
		}
		else {
			dfs(i+1);
		}
	}
}
int main()
{
	memset(a,0,sizeof(a));
	dfs(0);
	cout << ans;
	return 0;
 } 
