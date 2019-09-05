#include<iostream>
#include<stdio.h>//lh
using namespace std;
int main()
{
	int N,M,i,j,k;
	cin>>N>>M;
	int a[M],s[N]={0},z[M];
	for(i=0;i<M;i++)cin>>a[i];
	for(i=0;i<M;i++)cin>>z[i];
	for(i=0;i<N;i++)
	for(j=0;j<M;j++){
		cin>>k;
		if(k==z[j])
		s[i]+=a[j];
	}
	for(j=0;j<N;j++)cout<<s[j]<<"\n";
	
	return 0;

}
