#include <iostream> 
#include <vector> 
using namespace std; 
int main()
{

	int n,max=0,maxi=0;
	cin>>n;int a[n+1] = {0};
	for(int i = 0 ;i < n; i++){
		int a1,b;
		cin>>a1>>b;
		a[a1] += b;
	}
	for(int i = 0 ;i <= n; i++){
		if(i==1){
			max = a[i];
			maxi = i;
		}
		else{
			if(max < a[i]){
				max = a[i];
				maxi = i;
			}
		}
	}
	cout<<maxi<<" "<<max;
	
}
