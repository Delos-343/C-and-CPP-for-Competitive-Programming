
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	
	int a, n;
	
	bool prime = true;
	
	cin >> a;
	
	for (int i = 1; i <= a; i++)
	{
		cin >> n;
		
		for (int j = 2; j*j <= n; j++)
		{
			prime = true;
			
			if (n == 1)
			{
				prime = false;
				break;
			}
			
			else if (n %j == 0)
			{
				prime = false;
				break;
			}
		}
		
		if (prime)
		{
			cout << "YA";
		}
		
		else
		{
			cout << "BUKAN";
		}
		
		cout << endl;
	}
	
	return 0;
}

