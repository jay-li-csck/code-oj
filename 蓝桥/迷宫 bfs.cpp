#include <iostream>
#include <queue>
using namespace std;

#define N 30
#define M 50

char map[N][M];
// ∞¥◊÷µ‰–Ú≈≈¡– 
int dir[4][2] = {{1,0},{0,-1},{0,1},{-1,0}};//D<L<R<U
char ch[4] = {'D','L','R','U'};
int vis[N][M] = {0};
struct point {
	int x,y;
	string road;
	point(int a,int b) {
		x = a;
		y = b;
	}
};
void bfs() {
	queue<point> q;
	point p(0,0);
	p.road = "";
	q.push(p);
	vis[0][0] = 1;
	while(!q.empty()) {
		point t = q.front();
		q.pop();
		if(t.x == N-1 && t.y == M-1) {
			cout << t.road;
			return ;
		}
		for(int i = 0; i < 4; i++) {
			int xx = t.x + dir[i][0];
			int yy = t.y + dir[i][1];
			if(xx >= 0 && xx < N && yy >= 0 && yy < M) {
				if(map[xx][yy] == '0' && !vis[xx][yy]) {
					point tt(xx,yy);
					tt.road = t.road + ch[i];
					q.push(tt);
					vis[xx][yy] = 1;					
				}
			}
		}
	}
}
int main()
{
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++)
			scanf("%c",&map[i][j]);
		getchar();
	}
	bfs();
	return 0;
}
