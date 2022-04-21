
#include <bits/stdc++.h>

using namespace std;


int funct(int a, int b, int k, int x)
{
	int n;
	
	if (x > 1)
		n = funct(a, b, k, x - 1);
	
	else
		n = k;
	
	return abs((a*n) + b);
}


int main()
{
	int a, b, k, r;
	cin >> a >> b >> r >> k;
	
	int f = funct(a, b, k, r);
	
	cout << f << endl;
	
	return 0;
}

