//PAT A 1034Head of gang
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int N,K;
vector<Node> Adj[maxv];
map<string,int> mp;
mp["AAA"]=1;mp["BBB"]=2;mp["CCC"]=3;mp["DDD"]=4;mp["EEE"]=5;mp["FFF"]=6;mp["GGG"]=7;mp["HHH"]=8;mp["III"]=9;mp["JJJ"]=10;mp["KKK"]=11;mp["LLL"]=12;mp["MMM"]=13;
mp["NNN"]=14;mp["OOO"]=15;mp["PPP"]=16;mp["QQQ"]=17;mp["RRR"]=18;mp["SSS"]=19;mp["TTT"]=20;mp["UUU"]=21;mp["VVV"]=22;mp["WWW"]=23;mp["XXX"]=24;mp["YYY"]=25;mp["ZZZ"]=26;
struct Node{
	int v,w;
	Node(int _v,int _w):v(_v),w(_w) {}
};
//使用深度优先遍历
//对某个点进行递归，并将所有权值加起来作为一个团体的值，人数》2则加入记录 
bool vis[maxv]={false};
vector<gang> G;
struct gang{
	string head;
	int w;
	gang(string _head,int w):head(_head),w(_w){}
}; 
void DFS(int u,int &totalnum,int &count){
	vis[u]=true;
	count++;
	for(int i=0;i<Adj[u].size();i++){
		totalnum+=Adj[u][i].w;
	} 
}
void DFSTrave(){
	for(int i=0;i<N;i++){
		if(vis[i]==false){
			DFS()
		}
	}
}
int main(){
	scanf("%d %d",&N,&K);
	int t_name1,t_name2,t_weight;
	for(int i=0;i<N;i++){
		cin>>t_name1>>t_name2>>t_weight;
		int id1 = mp[t_name1];
		int id2 = mp[t_name2];
		Adj[id1].push_back(Node(id2,t_weight));
	}
	
} 
