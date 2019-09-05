#include<iostream>
using namespace std;
typedef struct{
	int score;
	int cnt;
	int right;
	int opt[5];
} question;
int main()
{
	int N,M;
	scanf("%d %d",&N,&M);
	question q[M];
	for(int i = 0; i < M; i++)
	for(int j = 0; j < 5; j++){
		q[i].opt[j] = 0;
	}
	for(int i = 0; i < M; i++)
	{
		char c;
		scanf("%d %d %d",&q[i].score,&q[i].cnt,&q[i].right);
		for(int j = 0; j < q[i].right; j++){
			scanf(" %c",&c);
			q[i].opt[c-'a']++;
		}
	}
	int error[M][5],max_error = 0;
	for(int i = 0; i < M; i++)
	for(int j = 0; j < 5; j++){
		error[i][j] = 0;
	}
	for(int i = 0; i < N; i++){
		getchar();
		double grade = 0.0;
		for(int j = 0; j < M; j++){
			int opt_cnt,isallright = 1,isright = 1;
			char c;int opt_stu[5] = {0};
			scanf("(%d",&opt_cnt);
			for(int k = 0; k < opt_cnt; k++){
				scanf(" %c",&c);
				opt_stu[c-'a'] = 1;
			}
			for(int k = 0; k < 5; k++){
				if(q[j].opt[k] == 1 && opt_stu[k] == 0)//答案有，没选
				{
					error[j][k]++;
					isallright = 0;
				 } 
				else if(q[j].opt[k] == 0 && opt_stu[k] == 1)//答案没，错选 
				{
					error[j][k]++;
					isright = 0;
				 } 
				 if(max_error < error[j][k])
				 	max_error = error[j][k];
			}
			scanf(")");
			if(j != M-1)
				scanf(" ");
			if(isright){
				if(!isallright)
					grade += q[j].score/2.0;
				else
					grade += q[j].score;
			}
		}
	printf("%.1f\n",grade);
	}
	if(max_error == 0)
		printf("Too simple\n"); 
	else 
	{ 
		for(int i = 0; i < M; i++) {
		 for (int j = 0; j < 5; j++) 
		 { 
		 if (error[i][j] == max_error) 
		 	printf("%d %d-%c\n", error[i][j], i+1, 'a'+j); 
			}
		}
	}
	
	return 0;
}
