#include <bits/stdc++.h>      // T.C : O(n^2)
using namespace std;            // S.C : O(n^2)
  
void printPascal(int n) 
{ 
    int arr[n][n];  
    
    for (int line = 0; line < n; line++) 
    {
        for (int i = 0; i <= line; i++){    // Every line has number of integers equal to line number 

        if (line == i || i == 0)      // First and last values in every row are 1 
            arr[line][i] = 1; 
        
        else
            arr[line][i] = arr[line - 1][i - 1] +  arr[line - 1][i];   // Other values are sum of values just above and left of above 
            
        cout << arr[line][i] << " "; 
        } 
        cout << "\n"; 
    } 
} 

int main() 
{ 
    int n = 5; 
    printPascal(n); 
    return 0; 
} 

OR

#include <bits/stdc++.h>      // T.C : O(n^2)
using namespace std;            // S.C : O(1)
  
void printPascal(int n) 
{ 
      
for (int line = 1; line <= n; line++) 
{ 
    int C = 1;           // used to represent C(line, i) 
    for (int i = 1; i <= line; i++)  
    { 
        cout<< C<<" ";            // The first value in a line is always 1 
        C = C * (line - i) / i;  
    } 
    cout<<"\n"; 
} 
} 

int main() 
{ 
    int n = 5; 
    printPascal(n); 
    return 0; 
} 
