#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int test;
	cin>>test;
	for (long long int i = 0; i < test; ++i)
	{
		long long int n;
		cin>>n;

		string sequence;
		cin>>sequence;

		long long int cnt=0;
		string sub;
		for(int  c = 0 ; c < n ; c++ )
      	{
         for(int  k = 1 ; k <= n - c ; k++ )
         {
            sub = sequence.substr(c, c+k);
            if(sub[0]=='1' && sub[sub.size()-1]=='1')
            	cnt++;
         }
      }

		cout<<cnt<<endl;
	}
}
