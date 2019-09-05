#include<iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s1,s2,s3,s4;
	int miao ;
	cin>>s1>>s2>>s3>>s4;
	int d[2];
	string ds[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i = 0,j = 0;
	while(i < s1.length() && i < s2.length()){
		if(s1[i] == s2[i] && (s1[i] <= 'G' && s1[i] >= 'A')){
			d[0] = s1[i];break;
		}
		i++;
	}
	i = i + 1;
	while(i < s1.length() && i < s2.length()){
		if(s1[i] == s2[i] && ((s1[i] <= 'N' && s1[i] >= 'A') || (isdigit(s1[i])))){
		d[1] = s1[i];
		break;
		}	
		i++;
	}
	while(j < s3.length() && j < s4.length()) {
	    if (s3[j] == s4[j] && isalpha(s3[j])) {
	        miao = j;
	        break;
	        }
	    j++;
	}
	int m = isdigit(d[1]) ? d[1] - '0':d[1] - 'A' + 10;
	cout<<ds[d[0]-'A'];
    printf("%02d:%02d", m, miao);
	return 0;
}
