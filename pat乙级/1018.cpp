#include <iostream>
using namespace std;
bool isab(char a,char b){
	if(a == 'C'){
		if(b == 'J')return true;
		else return false;
	}
	if(a == 'B'){
		if(b == 'C')return true;
		else return false;
	}
	if(a == 'J'){
		if(b == 'B')return true;
		else return false;
	}
}
int main()
{
	int n,m;
	cin>>n;m=n;
	int as[3]={0},bs[3]={0};
	int ping = 0,j = 0,y = 0;
	char a,b;
	while(n--){
		cin>>a>>b;
		if(a == b)ping++;
		else{
			if(isab(a,b)){
				j++;if(a == 'B')as[0]++;
				else if(a == 'C')as[1]++;
				else as[2]++;
			}
			else{
				if(b == 'B')bs[0]++;
				else if(b == 'C')bs[1]++;
				else bs[2]++;		
		}
		}
	}
	cout<<j<<" "<<ping<<" "<<m - ping - j<<endl;
	cout<<m - ping - j<<" "<<ping<<" "<<j<<endl;
	int maxj = as[0] >= as[1] ? 0:1;maxj = as[maxj] >= as[2] ? maxj:2;
	int maxy = bs[0] >= bs[1] ? 0:1;maxy = bs[maxy] >= bs[2] ? maxy:2;
	char str[4] = {"BCJ"};
	cout<<str[maxj]<<" "<<str[maxy];
	
}
