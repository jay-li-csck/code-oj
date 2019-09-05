#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	int n,m,t,k;
	cin>>n>>m;
	vector<set<char>> vec(m);
	int a[n],c[n];
	for(int i = 0; i < m; i++){
		cin>>a[i]>>t>>k;
		for(int j = 0; j < k; j++){
			char c;scanf(" %c", &c);
			vec[i].insert(c);
		}
	}
	for(int i = 0; i < n; i++)
	{
		int score = 0;
		scanf("\n");
		for(int j = 0; j < m; j++){
			if(j != 0)scanf(" ");	
			scanf("(%d",&k);
			set<char> se;
			char ch;
			for(int r = 0; r < k; r++){
				scanf(" %c",&ch);
				se.insert(ch);
			}
			scanf(")");
			if(se == vec[j])	
				score += a[j];
			else 
				c[j]++;	
		}
		cout<<score<<endl;
	}	
	int max = 0;
	for(int i = 0; i < m; i++){
		if(max < c[i])max = c[i];
	}
	if(max == 0)cout<<"Too simple";
	else{
		cout<<max;
		for(int i = 0; i < m; i++){
			if(max == c[i])
				cout<<" "<<i+1;
		}
	}	
	return 0;
}
