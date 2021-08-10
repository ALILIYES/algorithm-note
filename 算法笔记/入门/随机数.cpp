//随机数
//对于a,b范围内的数字为rand()%(b-a+1)+a 
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
