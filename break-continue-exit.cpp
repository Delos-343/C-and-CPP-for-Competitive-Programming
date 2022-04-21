#include <bits/stdc++.h>

using namespace std;


int main()
{
	
	int a, n;
	cin >> a;
	
	for ( n = 1; n <= a; n++)
	{
		if (n %10 == 0)
		{
			continue;
		}
		
		if ( n >= 42)
		{
			cout << "ERROR" << endl;
			break;
		}
		
		else
		{
			cout << n << endl;
		}
	}
	
	return 0;
}
