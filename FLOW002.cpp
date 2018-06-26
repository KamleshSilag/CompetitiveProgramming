#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;

	for (int i = 0; i < test; ++i)
	{
		int x,y;
		cin>>x>>y;

		int rem = x%y;
		cout<<rem<<endl;
	}
}