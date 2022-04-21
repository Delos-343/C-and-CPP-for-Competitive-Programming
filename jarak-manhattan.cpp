
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	
	int a, b, c ,d;
	int n;
	
	cin >> a >> c >> b >> d;
	
	if (a > b)
	{
		if (c > d)
		{
			n = (a - b) + (c - d);
		}
		
		else if (c < d)
		{
			n = (a - b) + (d - c);
		}
		
		else
		{
			n = (a - b);
		}
	}
	
	else if  (a < b)
	{
		if (c > d)
		{
			n = (b - a) + (c - d);
		}
		
		else if (c < d)
		{
			n = (b - a) + (d - c);
		}
		
		else
		{
			n = (b - a);
		}
	}
	
	else if (a == b)
	{
		if (c > d)
		{
			n = (c - d);
		}
		
		else if (c < d)
		{
			n = (d - c);
		}
		
		else
		{
			n = 0;
		}
	}
	
	cout << n << endl;
	
	return 0;
}

