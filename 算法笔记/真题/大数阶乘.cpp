//����һ�ִ����׳˵ķ�������ҿ���ճ�ڱ���IDE���棬�ײ�7700���²�Ϩ��
//�������ַ���ת����洢
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
struct bign{
    int d[10000];
    int len;
    bign(){//���캯����ֵ
        memset(d,0,sizeof(d));
        len=0;
    }
};
bign change(char str[]){//����λת��Ϊ��λ���ַ�ת����
    bign a;
    a.len=strlen(str);
    for(int i=0;i<a.len;i++)
        a.d[i]=str[a.len-i-1]-48;
    return a;
}
bign multi(bign a,int b){//������������
    bign c;
    int carry=0;
    for(int i=0;i<a.len;i++){
        int temp=a.d[i]*b+carry;
        c.d[c.len++]=temp%10;//��λֱ�Ӹ�ֵ
        carry=temp/10;//��λ��Ϊ��λ
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
            n+=pow(10,i)*a.d[i];//��n������ֵ
        while(n>1){//ʵ�ֽ׳�
            a=multi(a,n-1);
            n--;
        }
        for(int i=a.len-1;i>=0;i--)
            cout<<a.d[i];//������
    }
    return 0;
}
