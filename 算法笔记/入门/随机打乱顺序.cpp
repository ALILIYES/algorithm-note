#include<cstdio>
#include<ctime> 
#include<cstdlib>
const int maxn=10;
int a[maxn]={0,1,2,3,4,5,6,7,8,9};
void daluan(){
	srand((unsigned)time(NULL)); 	//��������� 
	int temp,random;
	for(int i=0;i<maxn;i++){
		temp=a[i];
		random=(rand()*rand())%10; //ѡ�񼯺ϵ����λ����iλ���� 
		//��������������������ԣ�������ܳ���ĳλ���������� 
		a[i]=a[random];
		a[random]=temp;
	}
}
int main(){
	for(int j=0;j<5;j++){
		printf("��%d�δ���   ",j+1);
		daluan();
		for(int i=0;i<maxn;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	
}
