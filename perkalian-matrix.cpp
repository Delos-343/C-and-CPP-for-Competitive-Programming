
#include <bits/stdc++.h>

using namespace std;

int arr1[120][120], arr2[120][120], arr3[120][120];

int main ()
{
	int a, b, l;
	cin >> a >> b >> l;
	
	int i, j, k;
	
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
		{
			cin >> arr1[i][j];
		}
	}
	
	for (j = 1; j <= b; j++)
	{
		for (k = 1; k <= l; k++)
		{
			cin >> arr2[j][k];
		}
	}
	
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= l; j++)
		{
			arr3[i][j] = 0;
			
			for (k = 1; k <= b; k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
			
			cout << arr3[i][j];
			
			if (j < l)
			{
				cout << " ";
			}
		}
		
		cout << endl;
	}
	
	return 0;
}

