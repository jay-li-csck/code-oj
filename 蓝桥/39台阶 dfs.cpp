#include <iostream>
using namespace std;
int cnt; 
//步数为偶数  走一步 或两步 
void dfs(int x,int sum) 
{
	if(x == 39 && sum%2 == 0) {
		cnt++;
		return;
	}
	if(x > 39) return ;
	dfs(x+1,sum+1);
	dfs(x+2,sum+1);
}
int main()
{
	cnt = 0;
	dfs(0,0);
	cout << cnt;
	return 0;
}
