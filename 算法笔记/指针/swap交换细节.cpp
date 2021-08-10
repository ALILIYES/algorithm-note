#include<stdio.h>
using namespace std;
void swap1(int *a,int *b)
{
	int temp=*a;
	*a = *b;
	*b = temp;
}
void swap2(int *a,int *b)
{
	int *temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}
void swap3(int *&a,int *&b)
{
	printf("%d,%d\n",a,b);
	int* temp= a;
	a = b;
	b = temp;
	printf("%d,%d,%d",a,b,temp);
}
int main(){
	int a=1,b=2;
	int *p1 = &a,*p2 = &b;
	swap3(p1,p2);
	printf("a=%d,b=%d\n",*p1,*p2);
	return 0;
}
