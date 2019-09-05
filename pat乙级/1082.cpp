#include <iostream>
using namespace std;
int main()
{
	int n,max,min,maxi,mini;
	cin>>n;
	for(int i = 0; i < n; i++){
		int s,x,y;
		cin>>s>>x>>y;
		int t = x*x + y*y;
		if(i == 0){
			max = min = s;
			maxi = mini = t;
		}
		else{
			if(maxi < t){
				max = s;
				maxi = t;
			}
			if(mini > t){
				min = s;
				mini = t;
			}
		}
		
	}
	printf("%04d %04d",min,max);
	return 0;
}
