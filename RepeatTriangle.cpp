#include<iostream>
using namespace std;
void printPatt(int n)
{
   int i,j;
   for (i = 0; i < n; ++i)
   {
     for (j = 0; j < i; ++j)
     {
       cout<<" ";
     }
     for (j = 0; j < n-i; ++j)
     {
       cout<<char(65+j);
     }
     int temp = j-1;
     for (; j < (n-i)*2 ; ++j)
     {
       cout<<char(65+temp);
       temp--;
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