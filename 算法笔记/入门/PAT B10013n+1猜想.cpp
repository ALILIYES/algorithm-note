#include<stdio.h>
int main(){
	int count=0,num;
	scanf("%d",&num);
	while(num!=1){
		if(num%2==1){
			num=(num*3+1)/2;
		}
		else{
			num/=2;
		}
		count++;
	}
	printf("%d",count);
} 
