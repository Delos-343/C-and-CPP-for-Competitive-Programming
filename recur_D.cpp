
#include <bits/stdc++.h>

using namespace std;


string pal(string str)
{
	int len = str.length();
	
	if (len <= 1)
		return "YA";
	
	string sub = str.substr(1, len - 2);
	
	if (str[0] != str[len - 1])
		return "BUKAN";
	
	else
		return pal(sub);
}


int main()
{
	string str;
	getline(cin, str);
	
	cout << pal(str) << endl;
	
	return 0;
}
