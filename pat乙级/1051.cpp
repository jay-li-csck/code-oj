#include<iostream>
#include<cmath>
#include <stdio.h>//lh
using namespace std;

int main()
{
	double p1,r1,p2,r2;
	double a1,b1,a2,b2,j,k;
	cin>>r1>>p1>>r2>>p2;
	a1= r1*cos(p1);
	b1= r1*sin(p1);
	a2= r2*cos(p2);
	b2= r2*sin(p2);
	j=a1*a2-b1*b2;
	k=a1*b2+a2*b1;
    if(j>-0.005&&j<0)
        printf("0.00");
    else 
        printf("%.2lf",j);
    if(k>-0.005&&k<0)
        printf("+0.00i");
    else if(k<=-0.005) 
        printf("%.2lfi",k);
    else printf("+%.2lfi",k);
	return 0;
	
}
