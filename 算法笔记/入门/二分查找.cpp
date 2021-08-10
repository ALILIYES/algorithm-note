//二分查找
#include<cstdio>
int binarysearch(int a[],int len,int N){
	int low=0,high=len-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==N)return mid;
		else if(a[mid]<N){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	} 
	return -1;
}
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9};
	int N;
	scanf("%d",&N);
	printf("查找元素的位置%d",binarysearch(a,9,N));
	return 0;
} 
