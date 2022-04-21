
#include <bits/stdc++.h>

using namespace std;


int main()
{
	string s, t, u, v;
	cin >> s >> t >> u >> v;
	
	s.erase(s.find(t), t.size());
	s.insert(s.find(u) + u.size(), v);
	
	cout << s << endl;
	
	return 0;
}

