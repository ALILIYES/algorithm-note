#include<iostream>
#include<math.h>
#include<string.h>
#include <algorithm>
using namespace std;
int main()
{
 char one[50], two[50];
 cin >> one >> two;
 char input[100];
 int n = sizeof(one);
 int m = sizeof(two);
 for (int i=0;i<n;i++)
 {
  input[i] = one[i];
 }
 for (int i=n;i<n+m;i++)
 {
  input[i] = two[i - 20];
 }
 sort(input, input + n + m);
 cout << input[0];
}
