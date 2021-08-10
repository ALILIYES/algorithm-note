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
 std::map<string, int> mm;
 string proxy[1003];
 int main(int argc, char const *argv[])
 {
    int n,m;
    string tmp;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>tmp;
            proxy[i]=tmp;
            mm[tmp]=1;
        }
        cin>>m;
        int p=n,ans=0;//p表示没有使用的个数
        for(int i=0;i<m;i++){
            cin>>tmp;
            //如果访问到一个和某个***服务器相同的目的IP
            if(mm[tmp]==0){
                //而可用的***服务器为零
                if(p==0){
                    ans=-1;
                    continue;
                }    
            }
            else if(mm[tmp]==1){
                mm[tmp]=0;
                p--;
                if(p<=0){//所有服务器用完后结果才加一
                    p=n-1;ans++;//用完本轮的***服务器后应该重新标识为可用
                    for(int j=0;j<n;j++){
                        if(proxy[j]!=tmp)    mm[proxy[j]]=1;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
 }
