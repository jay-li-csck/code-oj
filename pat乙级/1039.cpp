#include <iostream>
#include <string>
using namespace std; 
int main()
{
	int a[255] = {0};
	string s,s1;
	cin>>s>>s1;
	int y=0,y1=0,flag = 0;
	for(int i = 0; i < s.length(); i++){
		a[s[i]-'0']++;
	}
	for(int i = 0; i < 255; i++){
		if(a[i] != 0)y++;
	}
	for(int i = 0; i < s1.length(); i++){
		if(a[s1[i]-'0'] == 0)flag++;
		else
		a[s1[i]-'0']--;
	}
	if(flag == 0){
		cout<<"Yes "<<s.length()-s1.length();
	}
	else
		cout<<"No "<<flag;
	return 0;
}
