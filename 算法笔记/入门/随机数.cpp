//�����
//����a,b��Χ�ڵ�����Ϊrand()%(b-a+1)+a 
#include<cstdio>
#include<ctime>
#include<cstdlib>
int main(){
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++){
		printf("%d ",rand()%2);
	}
	//3-7
	for(int i=0;i<10;i++){
		printf("%d ",rand()%5+3);
	}
} 
