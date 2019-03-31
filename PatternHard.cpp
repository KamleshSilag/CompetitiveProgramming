#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
void printPatt(int n)
{
   int a=1,i,j;
   for (i = 0; i <=floor(n/2); ++i)
   {
      for (j = 0; j <n; ++j)
      {
         cout<<a<<" ";
         a++;
      }
      a=a+n;
      cout<<endl;
   }
   /*
   for (i = 0; i < ; ++i)
   {
      
   }*/
}

int main()
{
	int n;
   cin>>n;
	printPatt(n);
}