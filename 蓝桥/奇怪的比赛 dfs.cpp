#include <iostream>
using namespace std;
int a[11] = {0};
//10道题 作对 分翻倍  错 减题号分 
void dfs(int x,int ans) {
	if(x == 11) {
		if(ans == 100) {
		for(int i = 1; i < 11;i++)
			cout << a[i];
		cout << endl;
		return ;
		} 
		return ;
	}
	a[x] = 0;
	dfs(x+1,ans-x);
	a[x] = 1;
	dfs(x+1,ans*2);
		
} 
int main() 
{
	
	dfs(1,10);
	return 0;
}
