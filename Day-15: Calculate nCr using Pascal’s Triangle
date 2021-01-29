#include <bits/stdc++.h>      // T.C : O(1)
using namespace std;            // S.C : O(1)
  
int l[1001][1001] = { 0 }; 
int main() 
{ 
    int n = 8; 
    int r = 3; 
   
    // 0C0 = 1 
    l[0][0] = 1; 
    for (int i = 1; i < 1001; i++) { 
        
        l[i][0] = 1;         // Set every nCr = 1 where r = 0 
        for (int j = 1; j < i + 1; j++) { 
           l[i][j] = (l[i - 1][j - 1] + l[i - 1][j]);        // Value for the current cell of Pascal's triangle 
        } 
    } 
  cout<< l[n][r]; 
} 
