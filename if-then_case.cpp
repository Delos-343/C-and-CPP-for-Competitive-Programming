
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int a;
	cin >> a;
	
	if (a == 0)
	{
		cout << "nol" << endl;
	}
	
	else if (a > 0 && a < 10)
	{
		cout << "satuan" << endl;
	}
	
	else if (a < 100)
	{
		cout << "puluhan" << endl;
	}
	
	else if (a < 1000)
	{
		cout << "ratusan" << endl;
	}
	
	else if (a < 10000)
	{
		cout << "ribuan" << endl;
	}
	
	else if (a < 100000)
	{
		cout << "puluhribuan" << endl;
	}
	
	else
	{
		cout << "Soyuz, go to gulag" << endl;
	}
	
	return 0;
}
