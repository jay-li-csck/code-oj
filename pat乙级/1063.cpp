#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	int n;double k = 0.0;
	cin>>n;
	for(int i = 0; i < n; i++){
		int a,b;double c;
		cin>>a>>b;
		c = a*a + b*b;
		c = sqrt(c);
		if(k < c)k = c;
	}
	printf("%0.2f",k);
	return 0;
}
