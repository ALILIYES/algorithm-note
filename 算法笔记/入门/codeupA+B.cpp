 //string 和string.h不同 
#include<cstdio>
#include<string.h>
using namespace std;

int convert(char *str1,int len){
	long result=0;
	int num=1;//记录位数
	for(int i=len-1;i>=0;i--){
		if(str1[i]>='0'&&str1[i]<='9'){
			result+=(str1[i]-48)*num;
//			result+=((int)str1[i])*num; //int直接变为ascii码 
			num*=10;
		}
//		printf("\n%d\n",result);
	}
	if(str1[0]=='-'){
		result = -result;
	}
//	printf("\n%ld\n",result);
	return result; 
}

int main(){
	long a,b;
	char str1[20],str2[20];
	while(scanf("%s%s",str1,str2)!=-1){
		//计算位数
		a = convert(str1,strlen(str1));
		b = convert(str2,strlen(str2));
//		printf("%ld\n",a);
//		printf("%ld\n",b);
		printf("%ld\n",a+b);
	}
} 
