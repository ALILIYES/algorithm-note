//分享一种大数阶乘的方法，大家可以粘在本地IDE上玩，亲测7700以下不熄火
//方法是字符串转数组存储
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
struct bign{
    int d[10000];
    int len;
    bign(){//构造函数赋值
        memset(d,0,sizeof(d));
        len=0;
    }
};
bign change(char str[]){//将低位转化为高位，字符转数字
    bign a;
    a.len=strlen(str);
    for(int i=0;i<a.len;i++)
        a.d[i]=str[a.len-i-1]-48;
    return a;
}
bign multi(bign a,int b){//数组和数字相乘
    bign c;
    int carry=0;
    for(int i=0;i<a.len;i++){
        int temp=a.d[i]*b+carry;
        c.d[c.len++]=temp%10;//低位直接赋值
        carry=temp/10;//高位作为进位
    }
    while(carry){
        c.d[c.len++]=carry%10;
        carry/=10;
    }
    return c;
}
int main(){
    char str[10000];
    bign a;
    while(cin>>str){
        int n=0;
        a=change(str);
        for(int i=0;i<a.len;i++)
            n+=pow(10,i)*a.d[i];//用n保存数值
        while(n>1){//实现阶乘
            a=multi(a,n-1);
            n--;
        }
        for(int i=a.len-1;i>=0;i--)
            cout<<a.d[i];//输出结果
    }
    return 0;
}
