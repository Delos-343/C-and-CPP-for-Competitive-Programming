
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	
	int a;
	int b;
	
	cin >> a;
	
	while (a %2 == 0)
	{
		a = a /2;
	}
	
	if (a == 1)
	{
		cout << "ya" << endl;
	}
	
	else if (a != 1)
	{
		cout << "bukan" << endl;
	}
	
	return 0;
	
}

