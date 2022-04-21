
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	
	int a;
	cin >> a;
	
	for (int i = 0; i < a; i++)
	{
		int n;
		cin >> n;
		
		bool prime = true;
		int d = 2;
		int m = 0;
		
		while (d*d <= n)
		{
			if (n %d == 0)
			{
				m += 1;
			}	
		
			if ( m > 1)
			{
				prime = false;
			}
			
			d++;
		}
		
		
		
		if (prime)
		{
			cout << "YA";
		}
		
		else
		{
			cout << "BUKAN";
		}
		
		cout << "\n" << endl;
	}
	
	return 0;
}
