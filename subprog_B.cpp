
#include <bits/stdc++.h>

using namespace std;


void swap (int &a, int &b)
{
    int temp;
	
	temp = a;
    a = b;
    b = temp;
}


int main (int argc, char const* argv[])
{
	int n;
    cin >> n;
    
    int i, j, z;
    
    int arr[2][1001];
    
    for (i=0; i<2; i++)
    	for (j=0; j<n; j++)
    		cin >> arr[i][j];
	
	cin >> z;
	
	for (i=0; i<z; i++)
    {
    	char m1[5], m2[5];
		int x, y;
		
    	cin >> m1 >> x >> m2 >> y;
    	
    	int p = m1[0] - 'A';
    	int o = m2[0] - 'A';
    	
    	x--;
    	y--;
    	
    	swap (arr[p][x], arr[o][y]);
	}
	
	for (i=0; i<2; i++)
    {
    	for (j=0; j<n; j++)
    	{
    		cout << arr[i][j] << " ";
		}
		
		cout << "\n" << endl;
	}

    return 0;
}

