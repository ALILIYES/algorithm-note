#include<cstdio>
#include<algorithm>
const int maxn=4;
int n[maxn]={0}; 
bool cmp_h(int a,int b){
	return a>b;
}
bool cmp_l(int a,int b){
	return a<b;
}
int to_int(int n[]){
	int num=n[0];
	for(int i=1;i<maxn;i++){
		num=num*10+n[i];
	}
	return num;
}
void to_arry(int num){
	for(int i=3;i>=0;i--){
		n[i]=num%10;
		num/=10;
	}
}
void print_num(){
	for(int i=0;i<maxn;i++){
		printf("%d",n[i]);
	}
}
int main(){
	int gap=-1,num;
	scanf("%d",&num);
	to_arry(num);
	while(gap!=6174 && gap!=0){
		std::sort(n,n+4,cmp_h);
		print_num();
		printf(" - ");
		int high=to_int(n);
		std::sort(n,n+4,cmp_l);
		print_num();
		int low=to_int(n);
		if(low==high){ 
			printf("=0000\n");
			gap=0;
		}
		else{
			to_arry(high-low);
			printf(" = ");
			print_num();
			printf("\n");
			gap=high-low;
		}
	}	
	return 0;
} 
