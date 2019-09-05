#include<iostream>
using namespace std;
int main()
{
	int a,b = 0,temp = 0;
	string s;cin>>s>>a;
	int len = s.length();
	
	b = (s[0]-'0') / a;
	if((b != 0 && len > 1) || len == 1)
		cout<<b;
	temp = (s[0]-'0') % a;
	for( int i = 1; i < len; i++){
		b = (temp * 10 + s[i]-'0') / a;
		cout<<b;
		temp = (temp * 10 + s[i]-'0') % a;
	}
	cout<<" "<<temp;
	return 0;
}
