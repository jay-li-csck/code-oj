#include<iostream>
#include<algorithm>
#include <iomanip>
#include <vector>//lh
using namespace std;
bool cmp(int a,int b){return a>b;}
int sz(int a){
	int i = 0,az[4] = {0};
	while(a!=0){
		az[i++] = a%10;
		a = a / 10;
	}
	sort(az,az+4,cmp);
	int x = 0,y = 0;
	for(int i = 0; i < 4; i++)
		x = az[i] + x*10;
	sort(az,az+4);
	for(int i = 0; i < 4; i++)
		y = az[i] + y*10;
	printf("%04d - %04d = %04d\n",x,y,x-y);
	return x-y;
}
int main()
{
	int n,i = 0,a[4] = {0};
	cin>>n;
	int n1 = n;
	while(n!=0){
		a[i++] = n%10;
		n = n / 10;
	}
	if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3] &&a[0] == a[3])
	{
		printf("%04d - %04d = %04d\n",n1,n1,0);return 0;
	}
	else{
	int A = sz(n1);
	while(A != 6174){
		A = sz(A);
	}
	}
	return 0;
}
