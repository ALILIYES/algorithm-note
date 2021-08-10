#include<cstdio>
typedef struct{
	int num;
	char name[100];
	char sex[20];
	int age;
}stu_info;
int main(){
	int m,n,temp;
	stu_info clas[30];
	scanf("%d",&m);
	//ÑùÀıÊı 
	while(m!=0){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %s %s %d",&clas[i].num,&clas[i].name,&clas[i].sex,&clas[i].age);	
		}
		scanf("%d",&temp);
		for(int i=0;i<n;i++){
			if(clas[i].num==temp){
				printf("%d %s %s %d\n",clas[i].num,clas[i].name,clas[i].sex,clas[i].age);
				break;
			}
		}
		m--;		
	}
}
 
