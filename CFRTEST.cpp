#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int days[100]={0},cnt=0;
		int day_party[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>day_party[i];
		}

		for (int i = 0; i < n; ++i)
		{
			if((days[day_party[i]-1])==0)
			{
				cnt++;
				days[day_party[i]-1]=1;
			}
		}

		cout<<cnt<<endl;
	}
	return 0;
}