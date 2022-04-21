
#include <bits/stdc++.h>

using namespace std;


int yes_or_no (int a, int arr[100])
{
	stack <int> s;
	int i = 0;
	
	long start = 1;
	
	for (i = 0; i < a; i++)
	{
		while (!s.empty() && s.top() == start)
		{
			s.pop();
			start++;
		}
		
		if (arr[i] == start)
		{
			continue;
		}
		
		else if (!s.empty() && s.top() < arr[i])
		{
			cout << "No" << endl;
		}
		
		else
		{
			s.push(arr[i]);
		}
		
		cout << "Yes" << endl;
		
	}
	
		return 0;
}

int main()
{
	int a;
	cin >> a;
	
	int i;
	
	while (a != 0)
	{
		int arr[a];
		
		for (i = 0; i < a; i++)
		{
			cin >> arr[i];
		}
		
		yes_or_no (a, arr);
		
		cin >> a;
	}
	
	return 0;
}

