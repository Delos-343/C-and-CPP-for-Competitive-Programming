
#include<bits/stdc++.h>

using namespace std;


int main()
{
  int t;
  cin >> t;
  
  while(t--)
  {
    int n;
    cin >> n;
    
    int a[n] = {100};
    
    for(int i=0; i < n; i++)  cin >> a[i];
      
    int max = a[n-1], min = 0, undef = 0, idx, ind;
    
    vector<int>Z;
    
    Z.push_back(max);

    for(int i=n-2; i >= 0; i--)
    {
      if(a[i] < max)
      {
        Z.push_back(a[i]);
        
        min = a[i];
        
        idx = i;
        
        break;
      }
      
      else {
          
        if(max < a[i])   max = a[i];
        
        Z.push_back(a[i]);
      }
      
      if(i==0)  undef = 1;
    }
    
    if(undef || n==1)
    {
      cout << -1 << endl;
    }
    
    else {
        
      for(int i=0; i < idx; i++)    cout << a[i];
      
      sort(Z.begin(), Z.end());
      
      vector<int>::iterator pos = upper_bound(Z.begin(), Z.end(), min);
      
      cout << Z[pos-Z.begin()];
      
      for(auto u : Z)
      {
        if(u != Z[pos-Z.begin()])
        cout << u ;
      }
      
      cout << endl;
    }
  }
  
  return 0;
}

