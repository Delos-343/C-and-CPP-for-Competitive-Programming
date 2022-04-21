
#include <bits/stdc++.h>

using namespace std;


void Mt(int h)
{
	if (h<1)
		return;
	
	else
	{
		Mt(h - 1);
		
		for (int i=0; i < h; i++)
			cout << "*";
	}
	
	puts("");
	Mt(h - 1);
}


int main()
{
	
	int h;
	cin >> h;
	
	Mt(h);
	
	return 0;
}
