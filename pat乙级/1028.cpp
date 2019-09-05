#include<iostream>
using namespace std; 
int main()
{
	int n,ni,yue,ri,cnt = 0;
	cin>>n;
	string s,s1,s2;
	int max = 0,min = 0 ;
	for(int i = 0; i < n; i++){
		cin>>s;
		scanf(" %d/%d/%d",&ni,&yue,&ri);
		if( ni > 2014 || (ni == 2014 && yue > 9)|| (ni == 2014 && yue == 9 && ri > 6) 
		|| ni < 1814 || (ni == 1814 && yue < 9)|| (ni == 1814 && yue == 9 && ri < 6 ) ); 
		else{
			ni = ni-1800;
			int j = ni*1000+yue*100+ri;
			if(cnt == 0)
			{
				s1 = s2 = s;
				min = max = j;
			}
			else{
				if(min > j){
					s1 = s;
					min = j;
				} 
				if(max < j){
					s2 = s;
					max = j;
				} 
			} 
			cnt++;	
		}
	}	
	cout<<cnt;
	if(cnt != 0)cout<<" "<<s1<<" "<<s2;
	return 0;
}
