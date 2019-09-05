#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
// ×Ö·û´®¼Ó·¨    
using namespace std;
string add(string a,string b,string c){
	string ans;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	reverse(c.begin(),c.end());
	int carry = 0;
	int len = c.length()>b.length()?c.length():b.length();
	int i;
	for(i = 0; i < len; i++){
		int t,flag = 0;
		if(c.length() > i && b.length() > i)		
			t = (b[i]-'0' + c[i]-'0') + carry;
		else if(c.length() <= i && b.length() > i)
			t = b[i]-'0' + carry;
		else if(b.length() <= i && c.length() > i)
			t = c[i]-'0' + carry;
		carry = 0;
		int x = a[i]-'0';if(t == 0) flag = 1;
		if(x == 0)x = 10;
		while(t >= x){
			t -= x;
			carry += 1;
		}
		if(flag != 1)
		ans += char(t + '0');
	}
	if(carry > 0)ans += char(carry + '0');
	reverse(ans.begin(),ans.end());
	if(ans.length() == 0)ans += char('0');
	return ans;
}
int main()
{
	string n,a,b;
	cin>>n>>a>>b;
	cout<<add(n,a,b);
	
	
	return 0; 
}

