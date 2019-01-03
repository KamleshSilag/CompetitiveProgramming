#include<iostream>
using namespace std;

int Sum(int *arr, int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
 
    
}



int main()
{
	int n;
	cin>>n;

	int arr[n];
	int i=0;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}

	
	cout<<Sum(arr,n);
}
