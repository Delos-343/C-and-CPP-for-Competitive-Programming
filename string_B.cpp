
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s, z;
	cin >> s >> z;
	
	while (s.find(z) != string::npos)
	{
		s.erase(s.find(z), z.length());
	}
	
	cout << s << endl;
	
	return 0;
}
