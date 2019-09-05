v#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
a + b/c + def/ghi = 10   1-9±Ì æa-i 
*/ 
double a[10];
int vis[10] = {0};
int sum = 0;
void dfs(int step)
{
	if(step == 10){
		if(a[1]+a[2]/a[3]+(a[4]*100+a[5]*10+a[6])/(a[7]*100+a[8]*10+a[9]) == 10)
			sum++;
		return ;
	}
	for(int i = 1 ; i < 10 ; i++)
	{
		if(vis[i] == 0){
			a[step] = i;
			vis[i] = 1;
			dfs(step+1);
			vis[i] = 0;
		}
	}
	return ;
}
int main()
{
	dfs(1);
	cout << sum;
	
	return 0;
}
/*
	int a[10]={0,1,2,3,4,5,6,7,8,9}; 
	int sum=0; 
	while(next_permutation(a+1,a+10)) { 
		double lala=(double)a[1]+(double)a[2]/a[3]+(double)(a[4]*100+a[5]*10+a[6])/(a[7]*100+a[8]*10+a[9]); 
		if(lala==10.0) 
		sum++; 
	} 
	cout<<sum; 

*/
