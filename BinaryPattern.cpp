#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void printPatt(int n)
{
   for (int i = 1; i <= n; ++i)
   {
      char temp = char((65+n)-i);
   	for (int j = 1; j <= i ; ++j)
      {
         cout<<temp;
         temp = char((int)temp+1);
      }
      cout<<endl;
   }
}

int main()
{
	int n;
   cin>>n;
	printPatt(n);
}