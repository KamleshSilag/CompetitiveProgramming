#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int testcases;
	cin>>testcases;

	for (int i = 0; i < testcases; ++i)
	{
	int n,c;
	cin>>n>>c;

	int myneed[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>myneed[i];
	}

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum = sum + myneed[i];
	}

	if(c>=sum)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	}
}
