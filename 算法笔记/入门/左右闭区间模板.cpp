//Ѱ�����������һ������ĳ������Ԫ�ص�λ��
#include<cstdio>
int module(int a[],int low,int high,int N){
	int mid;
	while(low<high){
		mid=(low+high)/2;
		//�ҵ������е�һ�����ڵ���N�� 
		if(a[mid]>=N){
			high=mid;
		}
		else{
			low=mid+1;
		}
	}
	return low;
} 
