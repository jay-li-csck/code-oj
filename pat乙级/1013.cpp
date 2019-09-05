#include <iostream>
#include <cmath> 
#include <vector>
using namespace std;
bool isprime(int a){
	for(int i = 2; i <= sqrt(a); i++){
	    	if(a%i == 0)return false;
	}return true;
}
int main()
{
	int m,n,cnt = 1,flag = 0;
	cin>>m>>n;
	for(int i = 0,j=2; i < n;j++ ){
		if(isprime(j)){
			i++;
			if(i>=m){
				if(flag == 1)cout<<" ";
		        if(cnt%10  == 0){
					flag = 0;cout<<j<<endl;cnt++;
				}
				else {cout<<j;cnt++;flag = 1;
				}
				
			}
		}
	}
	return 0;
}
