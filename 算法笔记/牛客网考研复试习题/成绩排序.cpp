#include<cstdio>
#include<algorithm>
using namespace std;
struct stu{
    char name[20];
    int grade;
};
bool cmp1(stu a,stu b){
    return a.grade>b.grade;
}
bool cmp2(stu a,stu b){
    return a.grade<b.grade;
}
int main(){
    int N,m;
    while(scanf("%d\n%d",&N,&m)!=EOF){
        stu class1[N+5];
        for(int i=0;i<N;i++){
            scanf("%s %d",&class1[i].name,&class1[i].grade);
        }
        if(m==0){
            //使用stabe_sort能够不改变原来的顺序进行排序
            stable_sort(class1,class1+N,cmp1);
        }else{
            stable_sort(class1,class1+N,cmp2);
        }
        for(int i=0;i<N;i++){
            printf("%s %d\n",class1[i].name,class1[i].grade);
        }
    }
}
