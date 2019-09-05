#include <bits/stdc++.h>
using namespace std;
struct node {
	string name;
	int score,snum;
};
bool cmp(node a,node b){
	if(a.score != b.score)
		return a.score > b.score;//½µÐò 
	else if(a.snum != b.snum)
		return a.snum < b.snum;
	else 
		return a.name < b.name;
}
int main()
{
	int n;
	
	cin >> n;
	map<string,int> cnt;
	map<string,double> sum;
	vector<node> ans;
	string num,sn;
	for(int i = 0 ; i < n ; i++)
	{	double s = 0.0;
		cin >> num >> s >> sn;
		for(int j = 0 ; j < sn.length() ; j++)
		{
			sn[j] = tolower(sn[j]);
		}
		if(num[0] == 'B') s = s/1.5;
		else if(num[0] == 'T') s = s*1.5;
		cnt[sn]++;
		sum[sn] += s;		
	}
	for(map<string,int>::iterator i = cnt.begin() ; i != cnt.end() ; i++)
	{
		ans.push_back(node{i->first,(int)sum[i->first],cnt[i->first]});
	}
	sort(ans.begin(),ans.end(),cmp);
	cout << (int)ans.size() << endl;
	int rank = 0,p = -1;
	for(int i = 0 ; i < ans.size() ; i++)
	{
		if(p != ans[i].score) rank = i + 1; 
		cout << rank << " " << ans[i].name << " ";
		cout << ans[i].score << " "<< ans[i].snum << endl;
		p = ans[i].score;		
	}	
	return 0;
}
