
#include <bits/stdc++.h>

using namespace std; 	/* Crackhead Solution 101 */

int main()
{
    int n; 	 			/* n = size of queue via array
						(non-negative / zero) */
    cin >> n;
    
    int a[n],b[n]; 		/* Arrays a and b are assigned to size n */
    long int i;
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
		
    }					/* Three "FOR" loops with an increment
						   by i to provide space for the inputs */
    
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    for (i = 0; i < n; i++)
    {
        cout << a[i]+b[i];
    } 						  /* New "FOR" loop to output in line */
						   		
    cout << "\n" << " " << endl; /* removal of new line in output */
    
    					
    return 0;
}

