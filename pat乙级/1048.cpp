#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string A,B,result;
	cin>>A>>B;
	reverse(A.begin(),A.end()); 
	reverse(B.begin(),B.end()); 
	if(A.length() <B.length()) 
		A+=string(B.length()-A.length(),'0');
	else if(A.length() > B.length())
		B+=string(A.length()-B.length(),'0'); 
	int len = B.length(); 
	for(int i=0;i !=len;i++){ 
		if(i%2 == 0){ 
			int temp = (A[i]-'0'+B[i]-'0')%13; 
			if(temp ==10) result+='J';
			else if(temp == 11) result+='Q';
			else if(temp == 12) result+='K'; 
			else result+=temp+'0'; 
		} 
		else 
			result+=(B[i]-A[i]+10)%10+'0';
		} 
	reverse(result.begin(),result.end());
	cout<<result;

	return 0;
}
