//Ëµ·´»°
#include<cstdio>
#include<cstring>
int main(){
	char str[90];
//	while(gets(str)!=-1){
		gets(str); 
		int a=strlen(str)-1;
		
		for(int i=a;i>0;i--){
			if(str[i]==' '){
				for(int j=i+1;j<=a;j++){
					printf("%c",str[j]);
				}
				printf(" ");
				a=i-1;
			}
		}
		for(int i=0;i<a+1;i++)printf("%c",str[i]);
//	}
} 
