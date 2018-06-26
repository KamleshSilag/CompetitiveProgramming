#include <iostream>
using namespace std;

int check(long long int n)
{
	long long int prev = 0;
	while(n!=0)
	{
		int rem = n %10;
		n = n/10;

		if(n<10)
		{
			prev = n;
			break;
		}
	}

	return prev;
}

int main() {
	long long int test;
	cin>>test;

	for (int i = 0; i < test; ++i)
	{
		long long int x;
		cin>>x;

		int last = x%10;
		int first = check(x);


		cout<<(last+first)<<endl;
	}
}