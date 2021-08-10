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
int prime[50];

bool isprime(int n){
    if(n == 1)return false;
    if(n == 2||3)return true;
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){ 
    long int N;
    while(cin>>N){
    	vector<int> v;
        int n=N;
        for(int i=2;i<N;i++){
            if(n==1)break;
            while(n%i==0){
                if(isprime(i)){
                    v.push_back(i);
                    n = n/i;
                }
            }
        }
        printf("%d",v.size());
    }
}
