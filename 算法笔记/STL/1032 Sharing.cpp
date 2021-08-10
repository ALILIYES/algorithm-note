/*
11111 22222 9
67890 i 00002
00010 a 12345
00003 g -1
12345 D 67890
00002 n 00003
22222 B 23456
11111 L 00001
23456 e 67890
00001 o 00010
*/
//PATA 1032
#include<cstdio>
#include<cstdlib>
const int size = 100000;
struct node{
	int next;
	char word;
	bool isfirst = false;
}word[size];
int main(){
	int p,q,N;
	scanf("%d %d",&p,&q);
	scanf("%d",&N);
	int pos,next;
	char s_word;
	for(int i=0;i<N;i++){
		scanf("%d %c %d",&pos,&s_word,&next);
		word[pos].word = s_word;
		word[pos].next = next;
	}
	while(p!=-1){
		word[p].isfirst = true;
		p = word[p].next;
	}
	while(q!=-1){		
		if(word[q].isfirst==1){
			printf("%05d",q);
			break;
		}
		q = word[q].next;
		
	} 
	if(q==-1){
		printf("-1");
	}
} 
