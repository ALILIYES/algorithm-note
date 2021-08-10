#include<cstdio>
#include<cstring>
typedef struct{
	char n[10];
	char name[100];
	char sex[5];
	int age=0;
}stu_info;
int main(){
	int N;
	stu_info clas[1005];
	while(scanf("%d",&N)!=-1){
		for(int i=0;i<N;i++){
		scanf("%s %s %s %d",&clas[i].n,&clas[i].name,&clas[i].sex,&clas[i].age);	}
	int M;
	scanf("%d",&M);
	
	for(int i=0;i<M;i++){
		char temp[10];
		scanf("%s",&temp);
		int j;
		for(j=0;j<N;j++){
			if(strcmp(clas[j].n,temp)==0){
				printf("%s %s %s %d\n",clas[j].n,clas[j].name,clas[j].sex,clas[j].age);break;
			}
		}
		if(j==N)printf("No Answer!\n");
	}
	}
	
	
}
