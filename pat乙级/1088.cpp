#include <iostream>
#include <cmath>
using namespace std;
void fun(int a,double b){
	if(a == b)cout<<" Ping";
	if(a < b)cout<<" Cong";
	if(a > b)cout<<" Gai";
}
int main()
{
	int m,x,y,m0,m1 = 0;
	double m2;
	cin>>m>>x>>y;
	for(int i = 99; i > 9;i--){
		m0 = i;
		m1 = i%10*10 + i/10;
		m2 = (double)m1/(double)y;
		double k =abs(m0 - m1)*1.0/x ;
		if(m1 == k*y)
		{  
			cout<<i;fun(m,m0);fun(m,m1);fun(m,m2);
			return 0;
		}	
	}
	cout<<"No Solution";
	return 0;
}
