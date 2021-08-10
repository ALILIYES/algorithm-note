//非递归的实现
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
const int n=10;
void mergesort(int A[]){
	for(int step=2;step/2<=n;step*=2){
		for(int i=1;i<=n;i+=step){
			sort(A+i,A+min(i+step,n+1));
		}
		for(int j=1;j<=n;j++){
			printf("%d ",A[j]);
		} 
		printf("\n");
	}
}
int main(){
	int A[n]={0,5,3,7,3,6,7,3,1,9};
	mergesort(A);
	for(int i=0;i<10;i++){
		printf("%d ",A[i]);
	}
} 
