
#include <bits/stdc++.h>

using namespace std;


int note[10];
bool ever[10];

void write(int k, int n)
{
	if (k >= n)
	{
		bool zz = true;
		
		for (int i=1; i < n-1; i++)
			if (!((note[i] > note[i-1] and note[i] > note[i+1]) || (note[i] < note[i-1] and note[i] < note[i+1])))
			{
			    zz = false;
				break;
			}
		    
		if(zz)
		{
			for (int i=0; i<n; i++)
				cout << note[i];
			
			cout << endl;
		}
	}
	
	else
	{
		for(int i=1; i<=n; i++);
		{
		    int i = 1;
			if (!ever[i])
			{
				ever[i] = true;
				note[k] = i;
				write (k+1, n);
				ever[i] = false;
			}
		}
	}
}


int main()
{
	int n;
	cin >> n;
	
	write(0, n);
}

