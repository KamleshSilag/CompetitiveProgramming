#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	long long int n,k;
	cin>>n>>k;

	long long int inputs[n];
	long long int cnt=0;
	for (int i = 0; i < n; ++i)
	 {	
	 	cin>>inputs[i];
	 	if(inputs[i]%k==0)
	 		cnt++;
	 } 
	 cout<<cnt<<endl;
}