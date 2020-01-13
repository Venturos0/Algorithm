#include <iostream>
#include <cstring>
using namespace std;
int functionpower(int n,int m,int p)
{
	if(m == 0)
	{
		return 1;
	}
	if(m == 1)
	{
		return n;
	}
	p++;
	if(p == m)
	{
		return n;
	}
	return n*functionpower(n, m, p);
}
int main()
{
	int n, m, p = 0;
	cin >> n >> m;
	cout << functionpower(n, m, p);
	return 0;
}
