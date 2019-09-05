#include <iostream>
#include <stdlib.h>
#include <sstream>
using namespace std;
int main()
{
	string s;
	string h[13] = {"tret","jan"," feb", "mar", "apr", "may", "jun", "jly", "aug", "sep"," oct", "nov", "dec"};
	string g[13] = {"####","tam", "hel", "maa"," huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"}; 
	int a,n;
	cin>>n;    
	getchar();
	for(int i = 0 ; i < n; i++)
	{
		getline(cin,s); 
		if(s[0] >= '0' && s[0] <= '9'){
			a = stoi(s);
			if(a/13)cout<<g[a/13];
			if(a/13 && a%13)cout<<" ";
			if(a%13 || a==0)cout<<h[a%13];		
		}
		else{
			int t1 = 0,t2 = 0; 
			string s1 = s.substr(0,3),s2;
			if(s.length() > 4)s2 = s.substr(4,3);
			for (int j = 1; j <= 12; j++){
		        if (s1 == h[j] || s2 == h[j]) t2 = j;
		        if (s1 == g[j]) t1 = j;
	   		 }
	    cout<<t1*13 + t2;
		}
	cout<<endl;	
	}	
	return 0;
}
