#include<iostream>
using namespace std;
void printPatt(int n)
{
   for(int i=0;i<n;i++)
   {
   	   for (int j=n;j>(n-i);j--)
   	   {
   	   	 cout<<" ";
   	   }
       for(int j=n;j>i;j--)
       {
           cout<<"*";
       }
       cout<<endl;
   }
}

int main()
{
	int n=5;
	printPatt(n);
}