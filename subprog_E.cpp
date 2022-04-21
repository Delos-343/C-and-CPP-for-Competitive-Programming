
#include <bits/stdc++.h>

using namespace std;


int math(int a, int b, int k, int x)
{
	x = (a*x) + b;
	x = abs(x);
	
	if (k==1)
		return x;
	
	return math(a, b, k-1, x);
}


int main ()
{
	int a, b, k, x;
	cin >> a >> b >> k >> x;
	
	int ans = math(a, b, k, x);
	
	cout << ans << endl;
	
	return 0;
}

