#include <iostream>
#include<algorithm>
using namespace std;
bool cmp1(int a,int b){ return a>b;}
int a[1000000];
int main()
{
	int m;
	cin>>m; 
	for(int i = 1; i <= m; i++){
		int x;
		cin>>x;a[i] = x;
	}
	sort(a+1,a+m+1,cmp1);
	int ans = 0 , p = 1;
	while(ans <= m && a[p] > p){
		ans++;
		p++;
	}
	cout<<ans;
	return 0;
	
}

