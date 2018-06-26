#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int testcases;
	cin>>testcases;
	for(int t= 0 ; t<testcases ; t++)
	{
	int n,k;
	cin>>n>>k;

	string dictionary[n];
	string result[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>dictionary[i];
		result[i] = "NO";
	}

	for (int i = 0; i < k; ++i)
	{
		int l;
		cin>>l;

		string modernphrase[l];
		for (int j = 0; j < l; ++j)
		{
			cin>>modernphrase[j];	
		}

		for (int j = 0; j < l ; ++j)
		{
			for (int k = 0; k < n ; ++k)
			{
				if(modernphrase[j].compare(dictionary[k])==0)
				{
					result[k] = "YES";
				}
			}
		}

		
	}
	for (int j = 0; j < n; ++j)
	{
		cout<<result[j]<<" ";
	}
	cout<<endl;
}
}
