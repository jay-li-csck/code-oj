#include <iostream>
#include <string>
using namespace std; 
int main()
{
	string s;
	int a = 0,a1 = 0,a0 = 0;
	getline(cin,s);
	for(int i = 0; i < s.length(); i++){
		if(islower(s[i])){
			a += s[i]-'a' + 1;
		}
		if(isupper(s[i])){
			a += s[i]-'A' + 1;
		}
	}
	while(a != 0){
		int x = a % 2;
		if(x == 1)a1++;
		else a0++;
		a /= 2; 
	}
	cout<<a0<<" "<<a1;
	return 0;
}
