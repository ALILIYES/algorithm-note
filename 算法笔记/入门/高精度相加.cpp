#include<cstdio>
#include<cstring> 
struct bign{
	int d[1000];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign change(char str[]){
	bign a;
	a.len=strlen(str);
	for(int i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';
	}
	return a;	
}
int compare(bign a,bign b){
	if(a.len==b.len){
		for(int i=a.len-1;i>0;i--){
			if(a.d[i]>b.d[i]){
				return 1;
			}else if(a.d[i]<b.d[i]){
				return -1;
			}
		}
	}else{
		return a.len>b.len?1:-1;
	}
	return 0;
}
bign add(bign a,bign b){
	bign c;
	int carry=0;
	for(int i=0;i<a.len||i<b.len;i++){
		int temp=a.d[i]+b.d[i]+carry;
		c.d[c.len++]=temp%10;
		carry=temp/10;
	}
	if(carry!=0){
		c.d[c.len++]=carry;
	}
	return c;
}
bign sub(bign a,bign b){
	bign c;
	for(int i=0;i<a.len||i<b.len;i++){
		if(a.d[i]<b.d[i]){
			a.d[i+1]--;
			a.d[i]+=10;
		}
		c.d[c.len++]=a.d[i]-b.d[i];
	}
	while(c.len-1>=1 && c.d[c.len-1]==0){
		c.len--;
	}
	return c;
}
bign multi(bign a,int b){
	bign c;
	int carry = 0;
	for(int i=0;i<a.len;i++){
		int temp = a.d[i]*b+carry;
		c.d[c.len++] = temp%10;
		carry = temp/10;
	}
	while(carry!=0){
		c.d[c.len++]=carry%10;
		carry/=10;
	}
	return c;
} 
bign divide(bign a,int b,int& r){
	bign c;
	c.len=a.len;
	for(int i=a.len-1;i>=0;i--){
		r=r*10+a.d[i];
		if(r<b)c.d[i]=0;
		else{
			c.d[i]=r/b;
			r=r%b;
		}
	}
	while(c.len-1>=1 && c.d[c.len-1]==0){
		c.len--;
	}
	return c;
}
int main(){
	char str1[1000],str2[1000];
	scanf("%s %s",&str1,&str2);
	bign a=change(str1);
	bign b=change(str2);
	//负数与正数的相加即负数的相反数减正数所得 
	bign c=add(a,b);
	if(a>b){
		c=sub(a,b);	
	}else{
		c=sub(b,a);
	}
	for(int i=c.len-1;i>=0;i--){
		printf("%d",c.d[i]);
	}
	return 0;
} 
