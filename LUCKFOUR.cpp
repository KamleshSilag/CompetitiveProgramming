#include <iostream>
using namespace std;

int check(long long int n)
{
	long long int times=0;
	while(n!=0)
	{
		int rem = n %10;
		if(rem==4)
			times++;

		n = n/ 10;
	}

	return times;
}

int main() {
	long long int test;
	cin>>test;

	for (int i = 0; i < test; ++i)
	{
		long long int x;
		cin>>x;

		cout<<check(x)<<endl;
	}
}