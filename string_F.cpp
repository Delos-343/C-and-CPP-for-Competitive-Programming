
#include <bits/stdc++.h>

using namespace std;


int main()
{
	int i;
	
	string s;
	cin >> s;;
	
	for (i=0; i < s.size(); i++)
	{
		if (s[i] == '_')
		{
			s[i+1] -= 'a' - 'A';
			s.erase(i, 1);
		}
		
		else if (s[i] < 97)
		{
			s[i] += 'a' - 'A';
			s.insert(i, "_");
		}
		
		cout << s[i];
	}
	
	cout << "\n";
	
	return 0;
}

