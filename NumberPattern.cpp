#include<iostream>
using namespace std;
void printPatt(int n)
{
   for (int i = n; i >= 1; --i)
   {
     for (int j = i; j < n; ++j)
     {
       cout<<j<<"";
     }
     for(int j= 0 ; j<i; j++)
     {
      cout<<n<<"";
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