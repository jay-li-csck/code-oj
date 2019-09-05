#include <bits/stdc++.h>
using namespace std;
int hi[100010],wi[100010];
int mid;
int n,k;
bool judge(int x)
{
	int sum = 0;
	for(int i = 0 ; i < x ; i++)
	{
		sum += (hi[i]/x)*(wi[i]/x);
		if(sum >= k) return true;
	}
	return false;
}

int main()
{
	scanf("%d%d",&n,&k);
	for(int i = 0 ;i < n ; i++)
		scanf("%d%d",&hi[i],&wi[i]);
	int l = 0,r = 10000;
	while(l < r-1){
		mid = (l+r)/2;
		if(judge(mid)) l = mid;
		else r = mid;
	}
	cout << mid-1;
	return 0;
} 
