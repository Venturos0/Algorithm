#include <iostream>
using namespace std;
int function(string x,int i,int y)
{
	if(y == i)
	{
		return 1;
	}
	if(x[i] < 48 || x[i] > 57)
	{
		return 0;
	}
	i++;
	return function(x,i,y);
}

int main()
{
	string a;
	int i = 0;
	cin >> a;
	int n = function(a,i,a.size());
	if(n == 1)
	{
		cout << "Yes";
	}
	if(n == 0)
	{
		cout << "No";
	}
	return 0;
}
