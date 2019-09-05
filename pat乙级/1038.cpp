#include <iostream>  
#include <vector> 
using namespace std;   
int main()
{
	int n,m,x;
	scanf("%d",&n);
	vector<int> vec(101);
	for(int i = 0 ; i < n; i++){
		scanf("%d",&x);vec[x]++;
	}
	scanf("%d",&m);
	for(int i = 0 ; i < m; i++){
		scanf("%d",&x);
		if(i != 1)printf(" ");
		printf("%d",vec[x]);
	}
	return 0;
}
