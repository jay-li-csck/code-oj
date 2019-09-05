#include <bits/stdc++.h>
using namespace std;
int partition(int a[],int p,int r)
{
	int i = p;
	int j = r + 1;
	int x = a[p];
	while(1){
		//a[p,r]  p≈–∂œŒª    
		while(i<r && a[++i] > x) ;
		while(a[--j] < x) ;
		if(i >= j) 
			break;
		swap(a[i],a[j]);
	}
	swap(a[j],a[p]);
	return j;
}
void quicksort(int a[],int p,int r)
{
	if(p < r){
		int q = partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}
int main()
{
	int a[] = {5,13,6,24,2,8,19,27,6,12,1,17};
	int n = 12;
	quicksort(a,0,n-1);
	for(int i = 0 ; i < n ; i++)
		cout << " " << a[i];
	
	return 0;
}
