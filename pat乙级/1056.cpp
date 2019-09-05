#include<iostream>//lh
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int k,j,a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(j=0;j<n;j++)
	for(k=0;k<n;k++)
	{
		if(j!=k)
		sum+=a[j]*10+a[k];
	}
	cout<<sum<<endl;
	return 0;
}
