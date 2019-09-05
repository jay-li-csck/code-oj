#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,a[10000] = {0},f = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
        a[abs(x - (i + 1))]++;
	}
	for(int i = 10000 -1 ;i >= 0 ;i--){
		if(a[i] >=  2)
		cout<<i<<" "<<a[i]<<endl;	
	}
	return 0;
}
