//—°‘Ò≈≈–Ú
#include<cstdio>
const int N=6;
int main(){
	int a[N]={0,5,3,4,2,1};
	for(int i=1;i<=N;i++){
		int k=i;
		for(int j=i;j<=N;j++){
			if(a[j]<a[k])k=j;
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
	for(int i=0;i<6;i++)printf("%d ",a[i]);
} 
