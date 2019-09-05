#include <iostream>
#include <cmath>
using namespace std;
long long a,b,c,d;
long long gcd(long long t1,long long t2){
	return t2 == 0 ? t1 : gcd(t2,t1%t2);
}
void func(long long m,long long n){
	if(m * n == 0){
		printf("%s",n == 0 ? "Inf":"0");
		return ;
	}
	bool f = ((m < 0 && n > 0) || (m > 0 && n < 0));
	m = abs(m);n = abs(n);
	if(f)cout<<"(-";
	long long x = m/n;
	if( x != 0)printf("%lld",x);
	if(m % n == 0){
		if(f)printf(")");
		return ;
	}   
	if(x != 0) printf(" ");
	m = m - x*n;
	long long t = gcd(m,n);
	m = m/t; n = n/t;
	printf("%lld/%lld%s",m,n,f?")":"");
}
int main()
{
	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
	func(a,b); printf(" + "); func(c,d); printf(" = "); func(a*d + b*c , b*d);printf("\n");
	func(a,b); printf(" - "); func(c,d); printf(" = "); func(a*d - b*c , b*d);printf("\n");
	func(a,b); printf(" * "); func(c,d); printf(" = "); func(a*c , b*d);printf("\n");
	func(a,b); printf(" / "); func(c,d); printf(" = "); func(a*d , b*c);printf("\n");
	return 0;
}
