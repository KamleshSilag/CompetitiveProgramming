#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

long long int fact(long long int x)
{
	long long int factnum=1,i;
	for(i=1;i<=x;i++){    
      factnum=factnum*i;    
  	}

  	return factnum;
}
int main()
{
	long long int n;
	cin>>n;
	long long int numbers[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>numbers[i];	
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<fact(numbers[i])<<endl;
	}

}