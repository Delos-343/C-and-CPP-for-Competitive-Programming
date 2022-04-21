
#include <bits/stdc++.h>

using namespace std;

string binary(int n)
{
	if (n == 0)
	{
		return "";
	}
	
	else
	{
		int x = n %2;
		
		if (x == 0)
		{
			return binary(n /2) + '0';	
		}
		
		else
		{
			return binary(n /2) + '1';
		}
	}
}

int main ()
{
	int n;
	cin >> n;
	
	cout << binary(n) << endl;
	
	return 0;
}

