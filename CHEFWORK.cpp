#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int n;
	cin>>n;

	int coins[n];
	int type[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>coins[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>type[i];
	}

	int min1=INT_MAX,min2=INT_MAX,min3=INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(type[i]==1)
		{	
			if(coins[i]<min1)
				min1 = coins[i];
		}

		if(type[i]==2)
		{
			if(coins[i]<min2)
				min2 = coins[i];
		}
		if(type[i]==3)
		{
			if(coins[i]<min3)
				min3 = coins[i];
		}
	}

	if((min1+min2)<min3)
		cout<<min1+min2<<endl;
	else
		cout<<min3<<endl;
}
