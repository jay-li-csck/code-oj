#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	char ch;
	cin>>ch;getchar();
	getline(cin,s);
	if(ch == 'C')
	{
		char a;
		for(int i = 0; i < s.length(); i++){
			a = s[i];
			int cnt = 0;
			while(1){
				if(s[i] == s[i+1])
				{
					i++;
					cnt++;
				}
				else{
				if(cnt != 0)cout<<cnt+1;
				cout<<s[i]; break;
				}
			}
		}
	}
	else if(ch == 'D'){
		for(int i = 0; i < s.length(); i++){
			int sum = 0;
		while(s[i] <= '9' && s[i] >= '0')
			sum = sum*10 + s[i++]-'0';
		for(int j = 0; j < sum; j++)
			cout << s[i];
		if(sum == 0)
			cout << s[i];
		}
	}
	return 0;
}
