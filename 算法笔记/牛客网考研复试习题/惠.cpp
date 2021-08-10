#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
int a, b;
string one,onef;
string two,twof;
string out1, out2,out3;
cin >> one >>two;
int len1 = one.length();
int len2 = two.length();
if (len1 > 4)
  out1 = "?";
else {
  	for (int i=0;i<len1;i++)
  	{
   		a = one[i];
      	b = a * 10 + a;
 
  	}
  	onef = b;
	if (onef == one)
   		out1 = onef;
  	else
  	{
   		out1 = "?";
  	}
}
 if (len2 > 4)
  out2 = "?";
 else {
  for (int i = 0; i < len2; i++)
  {
   a = one[i];
   b = a * 10 + a;

  }
  twof = b;
  if (twof == two)
   out2=twof;
  else
  {
   out2 = "?";
  }

 }
 if (onef == one && twof == two)
 {
  out3 = a + b;
 }
 else
 {
  out3 = "?";
 }
 cout << out1 << "+" << out2 << "="<<out3;
 return 0;
}
