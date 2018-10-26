//Date: 22-10-18 
//Time :10:20PM
//By : kamlesh silag

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;

		int result=0,temp=k;
		for (int i = 0; i < n; ++i)
		{
			int x1,x2;
			cin>>x1>>x2;

			if((x1-k)>=0)
			{
				int temp1 = x1-k;
				result = result + temp1* x2;
				k=0;
			}
			else
			{
				k=k-x1;
			}

		}
		cout<<result<<endl;
	}
	return 0;
}