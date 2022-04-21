

#include <bits/stdc++.h>

using namespace std;


int main()
{
	
	int a, b = 0;
	cin >> a;
	
	for ( int i = 0; i < a; i++)
	{
		for (int n = 0; n < i + 1; n++)
		{
			cout << b;
			b = (b + 1) %10;
		}
		
		cout << "\n";
		
		cout << endl;
	}
	
	return 0;
}

