
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	long a, b;
	cin >> a >> b;
	
	long i, j;
	
	int d[100][100];
	
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			cin >> d[i][j];
		}
	}
	
	for (i = 0; i < b; i++)
	{
		for (j = a - 1; j >= 0; j--)
		{
			cout << d[j][i];
			
			if (j == 0)
			{
				cout << endl;
			}
			
			else
			{
				cout << " ";
			}
		}
	}
	
	return 0;
}

