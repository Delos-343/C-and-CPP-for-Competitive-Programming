
#include <bits/stdc++.h>

using namespace std;

int a, b;
int n;
	
int abs (int a)
{
	if (a >= 0)
	{
		return a;
	}
		
	else
	{
		return (a*(-1));
	}
}

int func (int x)
{
	if (x == 1)
	{
		return abs((a*n + b));
	}
	
	else
	{
		return abs((a*func(x - 1) + b));
	}
}

int main ()
{
	int x;
	cin >> a >> b >> x >> n;
	
	cout << func (x) << endl;
	
	return 0;
}

