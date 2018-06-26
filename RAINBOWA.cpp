#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int testcases;
	cin>>testcases;

for(int t = 0 ;t < testcases; t++)
{	
	int n;
	cin>>n;

	int arr[n];
	for ( int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}


	int beg = 0 , end = n-1 , flag = 0;
	for (int i = 0; i <= n/2; ++i)
	{
		if(beg==end)
		{
			if((arr[beg] - arr[beg-1])> 1)
			{
				flag = 1;
				break;
			}
		}


		if((arr[beg+1] - arr[beg]) > 1)
			{
				flag =1;
				break;
			}


		if(arr[beg]==arr[end])
		{	
			beg++;
			end--;
		}
		else
		{
			flag=1;
			break;
		}
	}

	if(flag==1)
		cout<<"no"<<endl;
	else
		cout<<"yes"<<endl;
}
}
