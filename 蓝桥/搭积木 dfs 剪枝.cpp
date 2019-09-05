#include <iostream>
using namespace std;
/* 从上到下越来越小 
      0
	1  2
   3  4  5
 6  7  8  9 
*/ 
int ans = 0;
int a[10],vis[10] = {0};
int test(int n) 
{
	if(n == 2) {
		if(a[0] < a[1] && a[0] < a[2]) {
			return 1;
		}
		return 0;
	}
	else if(n == 5) {
		if(a[1] < a[3] && a[1] < a[4] && a[2] < a[4] && a[2] < a[5]) {
			return 1;
		}
		return 0;
	}
	else if(n == 9) {
		if(a[3]<a[6]&& a[3]<a[7]&& a[4]<a[7]&& a[4]<a[8]&& a[5]<a[8]&&a[5]<a[9]) {
			ans++;
			return 1;
		}
		return 0;
	}
	else 
		return 1;
}
void dfs(int idx) 
{
	for(int i = 0; i < 10; i++) {
		if(!vis[i]) {
			vis[i] = 1;	
			a[idx] = i;
			if(!test(idx)) {
				vis[i] = 0;
				continue;
			}
			dfs(idx+1);
			vis[i] = 0;
		}
	}
}

int main()
{
	dfs(0);
	cout << ans; 
	return 0;	 	
}
