#include <iostream>
#include <cctype>
using namespace std;
int main() {
    int n;
    cin>>n;getchar();
    for(int i = 0;i < n;i++){
    	string s;
		getline(cin,s);
		if(s.length()>=6){
		int hasalnum = 0,hasalpha = 0,hasdigit = 0;
		for(int j = 0;j < s.length();j++){
			if(s[j] != '.'&& !isalnum(s[j])) hasalnum = 1;
			else if(isalpha(s[j])) hasalpha = 1;
			else if(isdigit(s[j])) hasdigit = 1;
		}
		if(hasalnum == 1)cout<<"Your password is tai luan le.\n";
		else if(hasalpha == 0)cout<<"Your password needs zi mu.\n";
		else if(hasdigit == 0)cout<<"Your password needs shu zi.\n";
		else cout<<"Your password is wan mei.\n";
		}
		else
			cout<<"Your password is tai duan le.\n"; 
	}
    
    return 0;
}
