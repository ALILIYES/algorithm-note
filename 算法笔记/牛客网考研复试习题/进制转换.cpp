#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

string conversion(int m,string num,int n){
    int l = num.length(),remain;
    string ans = "";
    for(int i=0;i<l;){
        remain = 0;
        for(int j=i;j<l;j++){
            int temp = (remain*m+num[j]-'0')%n;
            num[j] = (remain*m+num[j]-'0')/n+'0';
            remain = temp;
        }
        ans+=char(remain+'0');
        while(num[i]=='0')i++;
        cout<<num<<" "<<ans<<endl; 
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string num,ans;
    while(cin>>num){
        ans = conversion(10, num, 2);
        cout<<ans<<endl;
    }
    return 0;
}
