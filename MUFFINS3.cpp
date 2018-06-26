#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		long long int no;
		cin>>no;

		long long int A = no/2+1;
		cout<<A<<endl;		
	}

}