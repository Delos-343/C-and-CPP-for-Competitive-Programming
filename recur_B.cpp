
#include <bits/stdc++.h>

using namespace std;


int fact(int n)
{
	if (n == 1)
		return 1;
	
	else if (n%2 == 0)
		return n/2*fact(n-1);
	
	else
		return n*fact(n-1);
}


int main()
{
	int n, a;
	cin >> n;
	
	a = fact(n);
	
	cout << a << endl;
	
	return 0;
}

