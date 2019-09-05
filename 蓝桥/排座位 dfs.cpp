#include<iostream>
using namespace std;
int ans = 0;
int a[10]={0},vis[10] = {0};
int judge() {
	//3个A国人，3个B国人，3个C国人坐成一排。
	//要求不能使连续的3个人是同一个国籍。
	//设9个人分别为0-8，然后让每一个数对3取余，
	//结果只有0,1,2三种情况，正好可以用来区分三个国籍，
	int d,b,c,i,j,k;
	for(i=0,j=1,k=2;k<9;i++,k++,j++) {
		d = a[i]%3;
		b = a[j]%3;
		c = a[k]%3;
		if(b == c && b == d && d == c)
			return 0;
	}
	return 1;
}

void dfs(int n) {
	if(n == 9) {
		if(judge())ans++;
		return ;
	}
	
	for(int i = 0; i < 9; i++) {
		if(!vis[i]) {
		a[n] = i;
		vis[i] = 1;
		dfs(n+1);
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
