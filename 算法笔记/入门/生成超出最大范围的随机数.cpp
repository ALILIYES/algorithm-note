//生成超出上限的随机数
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++){
		printf("%d ",(int)(round(1.0*rand()/RAND_MAX*50000+10000)));
	}
} 
