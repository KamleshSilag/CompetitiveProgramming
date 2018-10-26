#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y,n,powToGive;
		cin>>x>>y>>n;

		if(n%2==0)
		{
			powToGive = pow(2,n/2);
			x = powToGive* x;
			y = powToGive * y;
		}
		else
		{
			powToGive = pow(2,n/2+1);
			x = powToGive *x ;
			y = powToGive/2 * y;
		}

		x>y?cout<<x/y:cout<<y/x;

	}
}