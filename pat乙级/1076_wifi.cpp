#include<stdio.h>
#include<string.h>
int main()
{
	char *ret;
	char ch = 'T';
	char str[20];
	int n;
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++){
		gets(str);
		ret = strchr(str, ch);//在 str 中返回第一次出现 ch 的位置 
		char c = *(ret-2);
		if( c== 'A')
			arr[i]=1;
		else if(c == 'B')
			arr[i]=2;
		else if(c == 'C')
			arr[i]=3;
		else if(c == 'D')
			arr[i]=4;
		}		
	for(int k=0;k<n;k++)
		printf("%d",arr[k]);
	return 0;
}
