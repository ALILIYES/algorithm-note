#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	int a[5]={1,2,3,4,5};
	memset(a,0,sizeof(a));
	for(int i=0;i<5;i++)printf("%d ",a[i]);
	memset(a,1,sizeof(a));
	for(int i=0;i<5;i++)printf("%d ",a[i]);
}
