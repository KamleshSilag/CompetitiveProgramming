#include<iostream>
#include<math.h>
using namespace std;

void calculate(long long int n)
{
	int sum = 0;
	while(n!=0)
	{
		long long int rem = n %10;
		sum = sum + rem;
		n = n/10;
	}

	cout<<sum<<endl;
}

int main()
{
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		long long int no;
		cin>>no;

		calculate(no);	
		
	}

}