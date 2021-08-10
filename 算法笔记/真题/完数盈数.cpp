#include<vector>
#include<iostream>
using namespace std;
int getnum(int x){
    int total = 0;
    for(int i=1;i<x;i++){
        if(x%i==0){
            total+=i;
        }
    }
    return total;
}
int main(){
    vector<int> E;
    vector<int> G;
    for(int i=2;i<61;i++){
        if(getnum(i)==i){
            E.push_back(i);
        }else if(getnum(i)>i){
            G.push_back(i);
        }
    }
    cout<<"E: ";
    for(int i=0;i<E.size();i++){
        cout<<E[i];
        if(i!=E.size()-1){
            cout<<" ";
        }
    }
    cout<<endl;
    cout<<"G: ";
    for(int i=0;i<G.size();i++){
        cout<<G[i];
        if(i!=G.size()-1){
            cout<<" ";
        }
    }
}
