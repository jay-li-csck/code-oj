#include <iostream>
#include <string>
using namespace std; 
int main()
{
	string s;
	cin>>s;
	int a[255] = {0};
	for(int i = 0; i < s.length(); i++){
		a[s[i]-'0']++;
	}
	while(a['P'-'0'] >= 0 || a['A'-'0'] >= 0 || a['T'-'0'] >= 0
	 || a['e'-'0'] >= 0 || a['s'-'0'] >= 0 || a['t'-'0'] >= 0){
	 	if(a['P'-'0']-- > 0)cout<<"P";
		if(a['A'-'0']-- > 0)cout<<"A";
		if(a['T'-'0']-- > 0)cout<<"T";
		if(a['e'-'0']-- > 0)cout<<"e";
		if(a['s'-'0']-- > 0)cout<<"s";
		if(a['t'-'0']-- > 0)cout<<"t";
	 }
	 return 0;
}
