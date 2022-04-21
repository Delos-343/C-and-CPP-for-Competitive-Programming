
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int a = 0;
	int n[100000], m[100000];
	
	cin >> a;
	
	for (int i = 1; i <= a; i++)
	{
		cin >> n[i];
		m[n[i]]++;
	}
	
	int mod = m[n[1]];
	int maxmod = n[1];
	
	for (int i = 2; i <= a; i++)
	{
		if (m[n[i]] >= mod)
		{
			mod = m[n[i]];
			maxmod = n[i];
		}
	}
	
	cout << maxmod << endl;
	
	return 0;
}

