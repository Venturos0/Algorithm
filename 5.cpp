#include <iostream>
#include <cstring>
using namespace std;
int functionfibonacci(int n)
{
	if(n == 0)
	{
		return 0;
	}
	if(n == 1)
	{
		return 1;
	}
	return functionfibonacci(n - 1) + functionfibonacci(n -2);
}

int main ()
{
	int n;
	cin >> n;
	cout << functionfibonacci(n);
	return 0;
}
