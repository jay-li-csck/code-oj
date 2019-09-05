#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,i,maxg,ming;
	string max,min,maxi,mini;
	string sname,sno;
	int grade;
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>sname>>sno>>grade;
		if(i == 0){
			ming = maxg = grade;	
			min = max = sname;
			mini = maxi = sno;
		}
		else{
		if(maxg < grade){
			maxg = grade;
			max = sname;
			maxi = sno;
		}
		if(ming > grade){
			ming = grade;
			min = sname;
			mini = sno;
		}
		}
	}
	cout<<max<<" "<<maxi<<endl;
	cout<<min<<" "<<mini;
	return 0;
}
	
	
