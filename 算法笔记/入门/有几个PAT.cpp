//输入字符串统计可以组成多少个PAT
#include<cstdio>
#include<cstring> 
const int maxn=100100;
const int mod=1000000007;
int main(){
	char str[maxn];
	int leftP[maxn]={0};
	int total=0,rightnum=0;
	scanf("%s",str);

	for(int i=0;i<strlen(str);i++){
		if(i>0){
			leftP[i]=leftP[i-1];
		}
		if(str[i]=='P'){
			leftP[i]++;
		}
	}

	for(int j=strlen(str)-1;j>=0;j--){
		if(str[j]=='T'){
			rightnum++;
		}
		else if(str[j]=='A'){
			total=(total+leftP[j]*rightnum)%mod;
		}
	}
	printf("%d",total);
} 
