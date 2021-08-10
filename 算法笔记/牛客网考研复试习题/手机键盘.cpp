#include <iostream>
 #include <queue>
 #include <stdlib.h>
 #include <stdio.h>
 #include <map>
 #include <string>
 #include <cstdlib>
 #include <stack>
 #include <vector>
 #include <math.h>
 #include <algorithm>
 #include <typeinfo>
 #include <cstring>
using namespace std;
const int maxn =100;
int main(){
    char t[maxn];
    int alp[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    //判断在同一按键的标准为字母顺序之差和按键之差相同
    while(scanf("%s",&t)!=EOF){
        int time = alp[t[0]-'a'];
        cout<<time<<endl;
        for(int i=1;i<strlen(t);i++){
            time+=alp[t[i]-'a'];
            if(alp[t[i]-'a']-alp[t[i-1]-'a']==t[i]-t[i-1]){
                time+=2;
            }
        }
        
    }
}
