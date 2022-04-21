
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	
	int a;
	int b = 0, k = 0;
	
	cin >> a;
	
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		k = b + k;
	}
	
	cout << k << endl;
	
	return 0;
	
}

