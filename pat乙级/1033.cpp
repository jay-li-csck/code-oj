#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int a[256] = {0};
	int flag = 0;//+ÉÏµµ¼ü 
	for(int i = 0; i < s1.length() ; i++)
	{
		if(isalnum(s1[i])){		
			a[s1[i]-'+']++;
			if(isupper(s1[i]))
			a[(s1[i]-'+')+32]++;
			if(islower(s1[i]))
				a[(s1[i]-'+')-32]++;						
		}
		else{
			if(s1[i] == '+')flag = 1;
			else
			a[s1[i]-'+']++;	
		}
	}
	for(int i = 0; i < s2.length() ; i++)
	{
		if(flag == 1){
			if(isupper(s2[i]))
				continue;
		}
		if(a[s2[i]-'+'] == 0)cout<<s2[i];
	}
	return 0;
}
