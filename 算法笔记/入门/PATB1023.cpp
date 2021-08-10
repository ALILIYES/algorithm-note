#include<cstdio>
int main(){
	int count[10];
	for(int i=0;i<10;i++){
		scanf("%d",&count[i]);
	}
	for(int i=1;i<10;i++){
		if(count[0]!=0){
			for(int j=1;j<10;j++){
				if(count[j]!=0){
					printf("%d",j);
					count[j]--;
					break;
				}
			}
			for(int m=count[0];m>0;m--){
				printf("0");
				count[0]--;
			}
		}
		for(int n=0;n<count[i];n++){
			printf("%d",i);
		}
	}
}
