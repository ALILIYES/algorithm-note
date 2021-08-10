//单个字符的表示为数字 s[0]-'a';
#include<cstdio>
#include<cstring> 
int main(){
  int k;
  scanf("%d",&k);
  char s[100];
  scanf("%s",&s);
  for(int i=0;i<strlen(s);i++){
    if((s[i]+k)>'z'){
    	printf("%c",s[i]+k-26);
    }else{
    	printf("%c",s[i]+k);
    }
  }
}
