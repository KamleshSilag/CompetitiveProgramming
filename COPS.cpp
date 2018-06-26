#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int m,x,y;
	cin>>m>>x>>y;

	int copslocation[m];
	for (int i = 0; i <m ; ++i)
	{
		cin>>copslocation[i];
	}

	for (int i = 0; i < m-1; ++i)
	{
		for (int j = 0; j < m-1 ; ++j)
		{
			if(copslocation[j]>copslocation[j+1])
			{
				int temp = copslocation[j];
				copslocation[j] = copslocation[j+1];
				copslocation[j+1] = temp;
			}
		}
	}



	int cover_house = x*y;
	int houses=0;

	for (int i = 0; i < m; ++i)
	{
		int temp = copslocation[i] - cover_house;
		if(temp <2)
		{

		}
		else
		{
			if(temp-copslocation[i-1] < 0 )
			{

			}
			else
			{
				houses = houses + copslocation[i] - cover_house;
			}
		}


	}

	cout<<houses;

}
