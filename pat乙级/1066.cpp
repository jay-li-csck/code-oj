#include<iostream>
#include<stdio.h>//lh
using namespace std;
int main()
{
	int n,m,a,b,c;
	cin>>n>>m>>a>>b>>c;
	int temp[n][m],i,j;
	for(i = 0;i < n;i++) 
    for(j = 0;j < m;j++) 
           	cin>>temp[i][j];
           	
    for(i = 0;i < n;i++) {
    for(j = 0;j < m;j++) {       
        if (temp[i][j] >= a && temp[i][j] <= b)
                temp[i][j] = c;
            if (j!= 0) printf(" ");
            printf("%03d", temp[i][j]);}
        printf("\n");
    }

	return 0;
}
