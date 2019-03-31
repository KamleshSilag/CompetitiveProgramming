#include<iostream>
using namespace std;
void printPatt(int n)
{
   int a=1;
   for (int i = 1; i <= n; ++i)
   {
     for (int j = 1; j <= i  ; ++i)
     {
        cout<<a<<" ";
        a++;
     }
     cout<<endl;
   }
}

int main()
{
	int n=5;
	printPatt(n);
}