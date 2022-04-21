

#include <bits/stdc++.h>

using namespace std;

int main ()
{
	
	int a, b, n;
	int max, min;
	max = -100000, min = 100000;
	
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		
		if (a >= max)
		{
			max = a;
		}
		
		if (a <= min)
		{
			min = a;
		}
	}
	
	cout << max << " " << endl;
	cout << min << " " << endl;
	
	return 0;
	 
}
