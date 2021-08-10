#include<cstdio>
//��һ�����ڵ��ڵ�
int lower_bound(int a[],int low,int high,int N){
	int mid;
	//��ʹ��С�ڵ�����Ϊ�����ж�Ԫ���Ƿ���ڣ�ֻҪȷ�����伴�� 
	while(low<high){
		mid=(low+high)/2;
		if(a[mid]>=N){
			//��ΪҪѡ����ڵ��ڵ�Ҳ�������Ԫ�������еĵ�һ�� 
			high=mid;
		}
		else{
			low=mid+1;
		}
	}
	return low;
} 

int higher_bound(int a[],int low,int high,int N){
	int mid;
	while(low<high){
		mid=(low+high)/2;
		if(a[mid]>N){
			high=mid;
		}
		else{
			low=mid+1;
		}
	}
	return low;
}
int main(){
	int a[5]={1,3,3,3,6};
	printf("%d %d",lower_bound(a,0,5,6),higher_bound(a,0,5,6));
	return 0;
}
