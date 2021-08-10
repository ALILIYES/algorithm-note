#include<iostream>
using namespace std;
int dp[1000010];
int a[1000010];
long long maxx;
int main(){
//     int N;
//     while(cin>>N){
//         int a[N],temp;
//         cin>>a[0];
//         for(int i=1;i<N;i++){
//             cin>>temp;
//             a[i]=a[i-1]+temp;
//         }
//         int max = -1;
//         for(int i=0;i<N;i++){
//             for(int j=0;j<i;j++){
//                 if(a[i]-a[j]>max){
//                     max = a[i]-a[j];
//                 }
//             }
//             if(a[i]>max){max=a[i];}
//         }
//         cout<<max<<endl;        
//     }
    int n ;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        dp[0] = a[0];
        maxx = 0;
        for(int i=1;i<n;i++){
            dp[i] = max(dp[i-1]+a[i],a[i]);
            if(maxx<dp[i]){
                maxx = dp[i];
            }
            cout<<dp[i]<<" "<<maxx <<endl; 
        }
        cout<<maxx<<endl;
    }
   return 0;
    
    
    
    
}
