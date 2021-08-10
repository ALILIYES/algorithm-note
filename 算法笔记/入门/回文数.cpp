//»ØÎÄ´®
#include<cstdio>
#include<cstring>
int main(){
	char str[260];
	while(scanf("%s",&str)!=-1){
		int mid=strlen(str)/2;
//		printf("%d",mid);
		int i;
		for(i=0;i<mid;i++){
			if(str[i]!=str[strlen(str)-i-1]){
				printf("NO");
				break;
			}
		}
		if(i==mid)printf("YES");
	}
} 
