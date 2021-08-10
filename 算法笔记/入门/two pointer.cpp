//寻找i与j和为M的所有组合 
#include<cstdio>
const int maxn=11;
int main(){
	int i=0,j=8,M=10;
	int a[maxn]={1,2,3,4,5,6,7,8,9};
	while(i<j){
		if(a[i]+a[j]==M){
			printf("%d %d\n",a[i],a[j]);
			i--;
			j--;
		}
		else if(a[i]+a[j]>M){
			j--;
		}
		else{
			i++;
		}
	} 
} 
