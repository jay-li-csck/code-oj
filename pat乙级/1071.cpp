#include<iostream>
#include<stdio.h>//lh
using namespace std;
struct db
{
	int n1,b,t1,n2;
}xiaodu;
int main()
{
	int t,k,j;
	cin>>t>>k;
	struct db xiaodu[k];
	for(int i=0; i<k ;i++)			
	cin>>xiaodu[i].n1>>xiaodu[i].b>>xiaodu[i].t1>>xiaodu[i].n2;
	
	for(j=0; j<k ;j++){
		if(t<=0){
		cout<<"Game Over.";break;
		}
		else if(xiaodu[j].t1>t)
			cout<<"Not enough tokens.  Total = "<<t<<"."<<endl;
			
		else if((xiaodu[j].n1>xiaodu[j].n2 && xiaodu[j].b==0 )
		||(xiaodu[j].n1<xiaodu[j].n2 && xiaodu[j].b== 1)){
			cout<<"Win "<<xiaodu[j].t1<<"!  Total = "<<t+xiaodu[j].t1<<"."<<endl;
		t+=xiaodu[j].t1;
		}
		else if((xiaodu[j].n1>xiaodu[j].n2 && xiaodu[j].b==1 )
		|| (xiaodu[j].n1<xiaodu[j].n2 && xiaodu[j].b== 0))
			if(t-xiaodu[j].t1<0){
			cout<<"Game Over.";break;	
			}
		else 
		{
			cout<<"Lose "<<xiaodu[j].t1<<".  Total = "<<t-xiaodu[j].t1<<"."<<endl;
			t-=xiaodu[j].t1;
		}
	}
	return 0;
}
