#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
struct stu{
	char r_num[15];
	int score;
	int final_rank;//最终总排名 
	int location_number;//所处序列号 
	int local_rank;//所处序列排名 
};
bool cmp(stu a,stu b){
	if(a.score!=b.score)return a.score>b.score;
	else return strcmp(a.r_num,b.r_num)<0;
}
int main(){
	int N,K,total=0,j;
	scanf("%d",&N);
	stu stu_list[30100];
	for(int i=0;i<N;i++){
		scanf("%d",&K);
		for(j=total;j<(K+total);j++){
			scanf("%s %d",&stu_list[j].r_num,&stu_list[j].score);
			stu_list[j].location_number=i+1;
		}
		if(K!=1){
			sort(stu_list+total,stu_list+total+K,cmp);
		}
		stu_list[total].local_rank=1;
		int r=1;
		for(j=total+1;j<total+K;j++){
			if(stu_list[j].score==stu_list[j-1].score){
				stu_list[j].local_rank=stu_list[j-1].local_rank;	
				r++;
			}
			else{
				stu_list[j].local_rank=r+1;
				r++;
			}
		} 
		if((total+K)!=1){
			sort(stu_list,stu_list+total+K,cmp);
		}
		//总排名 
//		for(j=0;j<total+K;j++){
//			if(stu_list[j].score==stu_list[j-1].score)stu_list[j].final_rank=stu_list[j-1].final_rank;
//			else{
//				stu_list[j].final_rank=j+1;
//			}
//		}
		total+=K;
	}	
	printf("%d\n",total);
	int r=1;
	for(int i=0;i<total;i++){
		if(i>0&&stu_list[i].score!=stu_list[i-1].score)r=i+1;
		printf("%s %d %d %d\n",stu_list[i].r_num,r,stu_list[i].location_number,stu_list[i].local_rank);
	}
	return 0;
}
