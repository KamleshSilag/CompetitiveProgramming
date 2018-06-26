#include<iostream>
#include<math.h>
using namespace std;


int sequence(int n)
{
	int c=1,i=0,sum=0;
	while(i<=n)
	{
		sum = sum + c;
		i++;
		c++;
	}
	return sum;
}

int main()
{
	int testcases;
	cin>>testcases;
	for (int i = 0; i < testcases; ++i)
	{
		int l,k;
		cin>>l>>k;

		cout<<"Case "<<i+1<<": "<<sequence(l-k)<<endl;		
	}	
}
