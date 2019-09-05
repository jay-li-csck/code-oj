#include <iostream>
using namespace std;
// Ä£ÄâÇóµ¼ 
int main()
{
	int a,b,flag = 0;
	while(cin>>a>>b){
		if(b != 0){
			if(flag != 0)cout<<" ";
			cout<<a*b<<" "<<b-1;flag = 1;
		}
	}
	if(flag == 0)cout<<"0 0";
	
	
	return 0;
}
