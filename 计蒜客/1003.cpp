#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<int> v1,v2;
    for(int i = 0; i < s1.length(); i++) {
        int f = 0;
        if(i > 1 && s1[i-1] == '-')
            f = 1;
    	if(isdigit(s1[i])) {
        int sum = 0;
        while(isdigit(s1[i])) {
            sum = sum*10 + s1[i++]-'0';
        }
        if(f == 0)
            v1.push_back(sum);
        else 
            v1.push_back(-sum);
        }
    }
    for(int i = 0; i < s2.length(); i++) {
        int f = 0;
        if(i > 1 && s2[i-1] == '-')
            f = 1;
        if(isdigit(s2[i])) {
        int sum = 0;
        while(isdigit(s2[i])) {
            sum = sum*10 + s2[i++]-'0';
        }
        if(f == 0)
            v2.push_back(sum);
        else 
            v2.push_back(-sum);
        }
        
    }
   
    int len1 = v1.size();
    int len2 = v2.size();
    int i1=0,i2=0; 
	int len = len1<len2 ? len1:len2;
    for(; ; ) {
        if(i1 < len1 && i2 < len2) ;
        else break;
        if(v1[i1] <= v2[i2]) 
            cout << v1[i1++];
        else 
            cout << v2[i2++];
        cout << "->";
    }
 
    while(i1 < len1) {
        cout<<v1[i1++]<<"->";
    }
    while(i2 < len2) {
        cout<<v2[i2++]<<"->";
    }
    cout << "NULL";
    return 0;
}
