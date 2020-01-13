#include <iostream>
using namespace std;
int reverse(int arr[],int n)
{
	if(n == 0) 
	{
	    return 0;
    }
	
	cout<<arr[n-1]<<' ';
	n--;
	
	functionKERI(arr,n);
}

int main ()
{
	int arr[100];
	int n;
	cin >> n;
	
	for(int i = 0;i < n;i++)
	{
		cin>>arr[i];
	}
	
	reverse(arr,n);
	return 0;
}
