#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[100001],b[100001],c[100001];
	int n,max = 0,cnt = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		int x;cin>>x;a[i] = x; b[i] = a[i];
	}
	sort(a,a+n);
	for(int i = 0; i < n; i++){
		if(a[i] == b[i] && b[i] > max){
			c[cnt++] = b[i];
		}
		if(b[i] > max){
			max = b[i];
		}
	}
	printf("%d\n",cnt);
	for(int i = 0; i < cnt; i++){
		if(i != 0)printf(" ");
		printf("%d",c[i]);
	}
	printf("\n");
	return 0;
}

