#include<cstdio>
#include<ctime> 
#include<cstdlib>
const int maxn=10;
int a[maxn]={0,1,2,3,4,5,6,7,8,9};
void daluan(){
	srand((unsigned)time(NULL)); 	//随机数生成 
	int temp,random;
	for(int i=0;i<maxn;i++){
		temp=a[i];
		random=(rand()*rand())%10; //选择集合的随机位数与i位交换 
		//两个随机数相乘增大随机性，否则可能出现某位数不变的情况 
		a[i]=a[random];
		a[random]=temp;
	}
}
int main(){
	for(int j=0;j<5;j++){
		printf("第%d次打乱   ",j+1);
		daluan();
		for(int i=0;i<maxn;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	
}
