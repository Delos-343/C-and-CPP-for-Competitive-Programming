
#include <bits/stdc++.h>

using namespace std;


char i[101], L[101];

int main()
{
	cin >> i;
	
	int n;
	cin >> n;
	
	for (int k=0; k<strlen(i); k++)
	{
		if ((int)i[k] + n >= 123)
			L[k] = (char) ((int)i[k] + n - 26);
		
		else if ((int)i[k] + n < 123)
			L[k] = (char) ((int)i[k] + n);
	}
	
	cout << L << endl;
	
	return 0;
}

