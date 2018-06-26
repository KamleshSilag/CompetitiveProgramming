#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	int x;
	cin>>x;

	double balance;
	cin>>balance;

	if(x+0.5 < balance && x%5==0)
		{
			balance = balance - x ;
			balance = balance - 0.50;
		}

	cout<<fixed<<setprecision(2)<<balance<<endl;
}