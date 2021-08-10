#include<string> //string 和string.h不同 
#include<cstdio>
using namespace std;
int main(){
    long long count[1000];
    int time=0,a=0,b=0,num=1;
    char str1[20],str2[20],;
    while(scanf("%s%s",&str1,&str2)!=EOF){
        if(== && M==0)break; 
        a=0;b=0;
        //计算位数
        int str1_length=0,str2_length=0; 
        for(int i=0;i<20;i++){
            if(str1[i]=='\0')str1_length=i;
        }
        for(int i=0;i<20;i++){
            if(str2[i]=='\0')str2_length=i;
        }
        num=1;//记录位数
        for(int i=str1_length;i>=0;i--){
            if(str1[i]>='0'&&str1[i]<='9'){
                a+=((int)str1[i])*num;
                num*=10;
            }
            else if(str1[i]=='-'){
                a*=-1;
                break;
            }
        } 
        num = 1;
        for(int i=str2_length;i>=0;i--){
            if(str2[i]>='0'&&str2[i]<='9'){
                b+=((int)str2[i])*num;
                num*=10;
                 
            }
            else if(str2[i]=='-'){
                b*=-1;
                break;
            }
        } 
//      printf("%d %d",a,b);
        count[time++]=a+b;
//      printf("%lld\n",count[time-1]);
    }
    for(int i=0;i<time;i++){
        printf("%lld\n",count[i]);
    }
} 
