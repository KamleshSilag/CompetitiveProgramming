#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	long int testcases;
	cin>>testcases;

	for (long int t = 0; t < testcases; ++t)
	{
		
	long int x,y,k,n;
	cin>>x>>y>>k>>n;

	long int array[n][2];
	for (long int i = 0; i < n; ++i)
	{
		for (long int j = 0; j < 2; ++j)
		{
			cin>>array[i][j];
		}
	}

	//sort as per bigger price;
	for (long int i = 0; i < n; ++i)
	{
		for (long int j = 0; j < n; ++j)
		{
			if(j==1)
			{
				if(array[i][j]<array[i+1][j])
				{
					int temp1 = array[i][j];
					int temp2 = array[i][j-1];

					array[i][j] = array[i+1][j];
					array[i][j-1] = array[i+1][j-1];

					array[i+1][j] = temp1;
					array[i+1][j-1] = temp2;
				}
			}
		}
	}
 	


 	int flag=0;
  	for (long int i = 0; i < n; ++i)
  	{
  		for (long int j = 0; j < 2; ++j)
  		{
 			if(j==1)
  			{
  				if(array[i][j]>k)
  					continue;
  				else
  				{
  					int pages = array[i][j-1];
  					if(y+pages>=x)
  						flag=1;
  				}
  			}
  		}
  	}

  	if(flag==1)
  		cout<<"LuckyChef"<<endl;
  	else
  		cout<<"UnluckyChef"<<endl;

  }
}
