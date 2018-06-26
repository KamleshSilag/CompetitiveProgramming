#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int testcases;
	cin>>testcases;
	for (int i = 0; i < testcases; ++i)
	{
		int n,k;
		cin>>n>>k;
		int values[n];

		int cnt=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>values[i];
			values[i]+=k;
		}

		for (int i = 0; i < n; ++i)
		{
			if(values[i]%7==0)
				cnt++;
		}

		cout<<cnt<<endl;

	}
}
