#include<iostream>
#include<math.h>
#include<malloc.h>
using namespace std;

void merge(long long int *A,long long int *L ,long long int leftcount,long long int *R,long long int rightcount)
{
	long long int i=0,j=0,k=0;
	while(i<leftcount && j<rightcount)
	{
		if(L[i]<R[j])
			A[k++]=L[i++];
		else
			A[k++]=R[j++];
	}

	while(i<leftcount)
	{
		A[k++]=L[i++];
	}
	while(j<rightcount)
	{
		A[k++]=R[j++];
	}
}
void mergesort(long long int *A,long long int n)
{
	long long int *L,*R,mid,i;

	if(n<2)
		return;

	mid = n/2;

	L = (long long int *)malloc(mid * sizeof(long long int));
	R = (long long int *)malloc((n-mid) * sizeof(long long int));

	for(i=0;i<mid;i++)
	{
		L[i] = A[i];
	}

	for(i=mid;i<n;i++)
	{
		R[i-mid] = A[i];
	}

	mergesort(L,mid);
	mergesort(R,n-mid);
	merge(A,L,mid,R,n-mid);
	free(L);
	free(R);

}  


int main()
{
	long long int n;
	cin>>n;
	long long int numbers[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>numbers[i];	
	}

	mergesort(numbers,n);

	for (long long int i = 0; i < n; ++i)
	{
		cout<<numbers[i]<<endl;
	}

}