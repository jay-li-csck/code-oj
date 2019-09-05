#include<iostream>
using namespace std;
int main()
{
	int a[1001] = {0},n;
	int a1,a2,a3;
	cin>>n;
	for(int i = 0; i < n; i++){
		scanf("%d-%d %d",&a1,&a2,&a3);
		a[a1] += a3;
	}int x = a[0],xi;
	
	for(int i = 0; i < 1001; i++){
		if(a[i] > x){x = a[i];xi = i;
		}
	}
	cout<<xi<<" "<<x;
	return 0;
}
