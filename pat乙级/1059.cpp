#include <iostream>
#include<math.h>
using namespace std;
bool IsPrime(int n) 
{ 
	int Sqtmp = sqrt(n); 
	if(n == 1) return false; 
	for(int i=2; i<=Sqtmp; ++i)
	{
	 	if(n%i == 0) return false; 
	} 
	return true;
  }
int main()
{
	int n,k;
	cin>>n;
	set<int> s;
	int a[10001] = {0};
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		a[x] = i + 1;
	}
	cin>>k;
	for(int i = 0; i < k; i++){
		int x;
		cin>>x;
		if(a[x] == -1){
			printf("%04d: Checked\n",x);continue;
		}
		if(a[x] == 0){
			printf("%04d: Are you kidding?\n",x);
 		}
		else{
			if(a[x] == 1){
				printf("%04d: Mystery Award\n",x);
				a[x] = -1;
			}
			else{
				if(IsPrime(a[x])){
					printf("%04d: Minion\n",x);
				a[x] = -1;
				}
				else{
				printf("%04d: Chocolate\n",x);
				a[x] = -1;
				}					
			}
		}
		
	}
}
