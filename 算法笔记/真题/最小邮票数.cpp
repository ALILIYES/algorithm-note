//#include<iostream>
//using namespace std;
//// MΪ��Ʊ��ֵ��nΪ��Ʊ������minNumΪ�õ������ٵ�����
//// NΪ��Ʊ���
//int M, n, minNum;
//int N[20];
//// indexΪ��Ʊ�ı�ţ�NumΪ��ǰ�õ�����Ʊ������SumΪ�õ�����Ʊ�����
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
//    // ��minNumһ�����ڵ���20�ĳ�ֵ
//    minNum = 20;
//    while(cin >> M){
//        cin >> n;
//        for(int i = 0; i < n; i++){
//            cin >> N[i];
//        }
//        // ��ʼindexΪ-1
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
//������������˼����ʲô������������ȣ�̰�ģ���̬�滮�� 
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
