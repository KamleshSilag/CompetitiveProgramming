#include<iostream>
using namespace std;

int MissingNumber(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    	
    int temp[size-1]={0};
    for (int i = 0; i <size; ++i)
    {
    	temp[arr[i]]++;
    }

    for (int i = 0; i < size-1; ++i)
    {
    	if(temp[i]==2)
    		return i;
    }


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

	
	cout<<MissingNumber(arr,n);
}
