//÷±Ω”≤Â»Î≈≈–Ú
#include<cstdio>
const int N=6;
int main(){
    int a[N] = {0,5,3,2,4,1};
    for(int i=2;i<=N;i++){
        int temp=a[i],j=i;
        while(j>1 && temp<a[j-1]){
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
    for(int i=0;i<6;i++)printf("%d ",a[i]);
} 
