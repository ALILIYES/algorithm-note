//#include<iostream>
//using namespace std;
//// M为邮票总值，n为邮票张数，minNum为用到的最少的张数
//// N为邮票面额
//int M, n, minNum;
//int N[20];
//// index为邮票的编号，Num为当前用到的邮票张数，Sum为用到的邮票总面额
//void DFS(int index, int Num, int Sum){
//    if(index == n){
//        if(Sum == M && Num < minNum){
//            minNum = Num;
//        }
//        return;
//    }
//    DFS(index + 1, Num + 1, Sum + N[index + 1]);
//    DFS(index + 1, Num, Sum);
//}
//int main(){
//    // 给minNum一个大于等于20的初值
//    minNum = 20;
//    while(cin >> M){
//        cin >> n;
//        for(int i = 0; i < n; i++){
//            cin >> N[i];
//        }
//        // 初始index为-1
//        DFS(-1, 0, 0);
//        if(minNum == 20){
//            minNum = 0;
//        }
//        cout << minNum << endl;
//    }
//    return 0;
//}

#include<cstdio>
#include<iostream>
using namespace std;
int num[20];
int M,N,mi=0;
//碰到这种问题思考用什么方法：深度优先？贪心？动态规划？ 
void DFS(int index,int sum,int count){
    if(index==N){
        if(sum==M && count<mi){
            mi = count;
        }
        return;
    }
    DFS(index+1, sum+num[index+1], count+1);
    DFS(index+1, sum, count);
}
int main(){
    int minnum = 20;
    while(cin>>M){
        cin>>N;
        for(int i =0;i<minnum;i++){
            cin>>num[i];
        }
        DFS(-1,0,0);
        if(mi==20){
            mi = 0;
        }
        cout<<mi<<endl;
    }
    return 0;
}
