#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int socks[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>socks[i];
	}

	int a[100]={0};
	for (int i = 0; i < n; ++i)
	{
		a[socks[i]-1]++;
	}


	int cnt=0;

	for (int i = 0; i < 100; ++i)
	{
		cnt+=a[i]/2;
	}

	cout<<cnt<<endl;
	return 0;
}