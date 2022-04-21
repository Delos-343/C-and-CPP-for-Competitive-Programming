
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	
	int a, b;
	int n, k;
	
	cin >> n >> k;
	
	for (a = 1; a <= n; a++)
	{
		if (a > 1)
		{
			cout << " " << endl;	
		}
		
		if (a %k == 0)
		{
			cout << "*" << endl;
		}
		
		else
		{
			cout << a << endl;
		}
	}
	
	return 0;
	
}
