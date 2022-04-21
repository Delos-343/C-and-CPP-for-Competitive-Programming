
#include <bits/stdc++.h>

using namespace std;


int rel (int a,int b, int c, int d, int x)
{
	return (pow(abs(a - b), x) + pow(abs(c - d), x));
}


int main()
{
	int n, x;
	cin >> n >> x;
	
	int arr[n][2];
	
	for (int i=0; i < n; i++)
		cin >> arr[i][0] >> arr[i][1];
	
	long long int smol, thicc;
	
	for (int i=0; i < n; i++)
	{
		for (int j= i+1; j < n; j++)
		{
			long long int k = rel (arr[i][0], arr[j][0], arr[i][1], arr[j][1], x);
			
			if (i==0 && j==1)
			{
				smol = k;
				thicc = k;
			}
			
			else
			{
				if (k < smol)
					smol = k;
				
				if (k > thicc)
					thicc = k;
			}
		}
	}
	
	cout << smol << " " << thicc << endl;
	
	return 0;
}

