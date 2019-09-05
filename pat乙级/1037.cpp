#include <iostream>  
using namespace std;   
int main()
{
	int flag ,g,g1,s,s1,k,k1;
	int ag,ak,as;ag = ak = as = flag = 0;
	g = g1 = s = s1 = k = k1 = 0;
	scanf("%d.%d.%d",&g,&s,&k);
	scanf("%d.%d.%d",&g1,&s1,&k1);
	if((g > g1) || (s > s1 && g == g1)|| (s == s1 && g == g1 && k > k1)){
		int temp;
		temp = k1;
		k1 = k;
		k = temp; 
		temp = s1;
		s1 = s;
		s = temp; 
		temp = g1;
		g1 = g;
		g = temp;
		flag = 1; 
	}

	if(k1 < k){
		s1--;
		ak = k1 - k + 29;
		}
	else ak = k1 - k ;
	if(s1 < s){
		g1--;
		as = s1 - s + 17;
	}
	else as = s1 - s ;
	ag = g1 - g;
	if(flag == 1)cout<<"-";
	cout<<ag<<"."<<as<<"."<<ak;	
} 
