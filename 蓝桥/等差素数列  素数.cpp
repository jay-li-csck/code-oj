#include <bits/stdc++.h>
#include <cmath>
using namespace std;
const int N = 100010;
int p[100010] ;
int prim[100010] ;
int cnt = 0;
void init(){
	memset(p,0,sizeof(p));
	p[0] = 1;p[1] = 1;p[2] = 0;
	for(int i = 2 ; i < 10000 ; i++)
	{
		if(p[i]) continue;
		for(int j = i ; j*i < 10000 ; j++){		
			p[i*j] = 1;
		}
		prim[cnt++] = i;		
	}
}
int main()
{
	init();
	for(int i = 0 ; i < cnt ; i++)
	{
		int t = prim[i];
		for(int j = 1 ; j < 1000 ; j++) // jÎªµÈ²î 
		{	
			int k;
			for( k = 1 ; k < 10 ; k++){
			if(p[t + j*k])
				break;
			}
		if(k >= 10)
		{
			cout << j << " " << prim[i];
			return 0;
		}
		}
	}
	return 0;
}
