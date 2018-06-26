#include<iostream>
using namespace std;

int main()
{
	int test;
	cin>>test;

	for (int i = 0; i < test; ++i)
	{
		long long int number, reversed=0;
		cin>>number;
	  	while(number!=0)
  		{
    		reversed= reversed*10;
    		reversed=reversed+number%10;
    		number=number/10;
  		}

  		cout<<reversed<<endl;
  	}
}