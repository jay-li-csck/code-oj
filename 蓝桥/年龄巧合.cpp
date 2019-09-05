#include<iostream>
using namespace std;
int f(int n) {
	int t = 0;
	while(n != 0) {
		t += n%10;
		n = n/10;
	}
	return t;
}
int main()
{
	int a = 2014,cnt = 0;
	for(int i = 2014; i > 0; i--) {
		int t = 2014-i ;
		int b = f(i);
		if(t == b) {
			cnt++;
			
			if(cnt == 2) {
				cout << i;
				return 0;
			}cout << i;
		}
	}
	
	
	return 0;
}
