#include<cstdio>
#include<string>
#include<queue>
using namespace std;
int main(){
    string str;
    vector<string> v;
    while(scanf("%s",&str)!=EOF){
        v.push_back(str);
    }
    for(int i=0;i<v.size();i++){
        for(int j=v[i].size();j>0;j--){
            printf("%c",v[i][j]);
        }
        printf("\n");
    }
}
