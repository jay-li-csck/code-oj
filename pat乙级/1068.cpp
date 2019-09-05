#include<bits/stdc++.h>
using namespace std;
const int dr[] = {1,-1,0,0,1,1,-1,-1};//下 上 右 左 右上 右下 左上 左下
const int dc[] = {0,0,1,-1,1,-1,1,-1};
int a[1001][1001];
map<int,int> rs;
int M,N,TOL;
bool judge(int r,int c) {
    for(int i = 0; i < 8; ++i) {
        int nx = r+dr[i], ny = c+dc[i];
        if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
        if(abs(a[nx][ny]-a[r][c])<=TOL) return false;
    }
    return true;
}
int main(){
    cin>>N>>M>>TOL;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>a[i][j];
            rs[a[i][j]]++; 
        }
    } 
    
    int x,y=0;
    int cnt=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            int data=a[i][j];
            if(rs[data]==1&&judge(i,j)){//边界判断！
                x=i;
                y=j;
                cnt++; 
            }
        }
    }
 
     if(cnt==0) cout<<"Not Exist"<<endl;
     else if(cnt==1)
            cout<<"("<<y+1<<", "<<x+1<<")"<<": "<<a[x][y]<<endl;
        else{
            cout<<"Not Unique"<<endl;
        }
}

