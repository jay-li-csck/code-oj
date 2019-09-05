#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
struct node {
	string num;
	int score;
};

bool cmp(node a,node b){
	if(a.score != b.score)
		return a.score > b.score;//½µÐò 
	else 
		return a.num < b.num;
}
int main()
{
	int m,n;
	cin >> n >> m;
	vector<node> v(n);
	string s;
	int x;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i].num  >> v[i].score;
	}

	for(int i = 0 ; i < m ; i++)
	{
		vector<node> ans;
		int f = 0,cnt = 0 ,sum = 0;
		cin >> x >> s;
		cout << "Case "<< i+1 <<": "<< x <<" " << s << endl;
		switch(x){
			case 1:{			
				for(int k = 0 ; k < n ; k++)
				{
					if(v[k].num[0] == s[0]){	
					ans.push_back(v[k]);
					f = 1;
					}		
				}
				if( f == 0) cout << "NA" << endl;
				break;
			}
			case 2:{
				for(int k = 0 ; k < n ; k++)
				{
					if(v[k].num.substr(1,3) == s){
						sum += v[k].score;
						cnt++;
					} 					
				}
				if(cnt == 0) cout << "NA" << endl;
				else cout << cnt << " " << sum << endl;
				break;
			}
			case 3:{
				unordered_map<string,int> mapa;
				for(int k = 0 ; k < n ; k++){
					if(v[k].num.substr(4,6) == s){
						mapa[v[k].num.substr(1,3)]++;
						f = 1;	
					}				
				}
				for(map<string,int>::iterator it = mapa.begin();it != mapa.end();it++)
					ans.push_back({it->first,it->second});
				if( f == 0) cout << "NA" << endl;
				break;
			}
		}
		sort(ans.begin(),ans.end(),cmp);
		for(int k = 0 ; k < ans.size() ; k++)
			cout << ans[k].num << " " << ans[k].score << endl;
		
	}
	return 0;
}
