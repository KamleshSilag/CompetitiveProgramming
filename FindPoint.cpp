#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	while(n--)
	{
		int p1,p2,q1,q2;
		cin>>p1>>p2>>q1>>q2;

		int diff_1=q1-p1;
		int diff_2=q2-p2;

		cout<<q1+diff_1<<" "<<q2+diff_2<<endl;
	}
	return 0;
}