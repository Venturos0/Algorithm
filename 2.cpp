#include <iostream>
#include <cstring>
using namespace std;
int functionfindavg(int arr[],int n,int i,double avg)
{
	if(i == n)
	{
		return avg;
	}
	avg += arr[i];
	i++;
	return functionfindavg(arr,n,i,avg);
}
int main ()
{
	int arr[100];
	int n, i = 0; 
	double avg = 0;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		cin>>arr[i];
	}
	cout << functionfindavg(arr,n,i,avg)/(n/1.0);
	return 0;
}
