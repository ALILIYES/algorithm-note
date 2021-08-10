//寻找有序区间第一个满足某条件的元素的位置
#include<cstdio>
int module(int a[],int low,int high,int N){
	int mid;
	while(low<high){
		mid=(low+high)/2;
		//找到序列中第一个大于等于N的 
		if(a[mid]>=N){
			high=mid;
		}
		else{
			low=mid+1;
		}
	}
	return low;
} 
