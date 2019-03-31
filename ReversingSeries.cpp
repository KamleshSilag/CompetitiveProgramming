#include<iostream>
using namespace std;
void printPatt(int n)
{
   int a=1,temp;
   for (int i = 1; i <= n; ++i)
   {
    if(i%2==0)
    {
      temp=a+i-1; 
      for (int j = 1; j <= i  ; ++j)
      {
       cout<<temp<<" ";
        temp--;
        a++;
      } 
    }
    else
    {
      for (int j = 1; j <= i  ; ++j)
      {
       cout<<a<<" ";
        a++;
      }
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