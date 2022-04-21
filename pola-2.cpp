
#include <bits/stdc++.h>

using namespace std;


int main()
{
	
	int a;
	cin >> a;
	
	for ( int i = 0; i < a; i++)
	{
		for (int n = a - i - 1; n > 0; n--)
		{
			cout << " " << endl;
		}
		
		for ( int m = 0; m <= i; m++)
		{
			cout << "*";
		}
		
		cout << endl;
	}
	
	return 0;
}

