# 指针

### swap函数的易错点

```cpp
// *a是指a指针的值  &a是指a指针的地址 
#include<stdio.h>
using namespace std;
//
void swap1(int *a,int *b)		//传入两指针a,b
{
	//a值给temp,ab值交换，temp值给b
	int temp=*a;
	*a = *b;
	*b = temp;
}
void swap2(int *a,int *b)
{
	//temp指向随机地址（大可能系统变量），a值给temp，篡改temp值，b值给a，temp值给b
	int *temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}
void swap3(int *a,int *b)
{
	//a地址赋给temp,b地址给a,temp地址给b。函数内部a,b指向交换，但p1p2没有交换
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

result:

a=2,b=1
//空
a=1,b=2
```

