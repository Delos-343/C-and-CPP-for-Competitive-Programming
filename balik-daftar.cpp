
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int a = 0, n[100];
	
	while (cin >> n[a])
	{
		a++;
	}
	
	for (int i = a - 1; i >= 0; i--)
	{
		cout << n[i] << endl;
	}
	
	return 0;
}
