#include<iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	char ch;
	getline(cin, s);
	int a[255]= {0},cnt = 0,max = 0;
	for(int i = 0 ; i < s.length() ; i++){
		if(isupper(s[i])) s[i] = tolower(s[i]);
		if(islower(s[i])){
			a[s[i] - '0']++;
			cnt++;
		}
	}
	for(int i = 0 ; i < 255 ; i++){
		if(a[i]>max){
			max = a[i];
			ch = i + '0';
		}
	}
	cout<<ch<<" "<<max;
	return 0;
}
