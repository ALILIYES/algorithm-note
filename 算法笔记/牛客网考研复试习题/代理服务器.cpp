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
        int p=n,ans=0;//p��ʾû��ʹ�õĸ���
        for(int i=0;i<m;i++){
            cin>>tmp;
            //������ʵ�һ����ĳ��***��������ͬ��Ŀ��IP
            if(mm[tmp]==0){
                //�����õ�***������Ϊ��
                if(p==0){
                    ans=-1;
                    continue;
                }    
            }
            else if(mm[tmp]==1){
                mm[tmp]=0;
                p--;
                if(p<=0){//���з�������������ż�һ
                    p=n-1;ans++;//���걾�ֵ�***��������Ӧ�����±�ʶΪ����
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
