#include<cstdio>
//第一个大于等于的
int lower_bound(int a[],int low,int high,int N){
	int mid;
	//不使用小于等于因为无需判断元素是否存在，只要确定区间即可 
	while(low<high){
		mid=(low+high)/2;
		if(a[mid]>=N){
			//因为要选择大于等于的也就是相等元素序列中的第一个 
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
