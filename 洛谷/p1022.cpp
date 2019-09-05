#include <iostream> 
#include <cstdio> 
using namespace std;
char c,a;
int f = 1,now = 1,k,b,x;//f +-  now = 左右 k 系数 b 上一个常数 x 常数 b
bool r;//判断是否有数字存入 
int main()
{ 
	while(cin>>c) {
		if(c == '+') {b += now*f*x; x = 0; f = 1; r = 0;}
		if(c == '-') {b += now*f*x; x = 0; f = -1; r = 0; }
		if(c == '=') {b += now*f*x; x = 0; f = 1; now = -1; r = 0; }
		if(c >= 'a' && c <= 'z') {
			if(r) { 
				k += now*f*x; x = 0;
			}
			else 
			k += now*f;
			a = c; r = 0;
		} 
		
		if(c <= '9' && c >= '0')
		{
			x = x*10 + c-'0'; r = 1;
		}
	} 
	b += now*f*x; 
	double ans = double(-b*1.0/k);
	if(ans == -0.0) ans = 0;//特判 -x = 0 
	printf("%c=%.3lf",a,ans);
	return 0;
 } 
