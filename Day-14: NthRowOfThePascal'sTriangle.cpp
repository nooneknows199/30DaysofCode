#include <bits/stdc++.h>          // T.C : O(n^2)
using namespace std;              // S.C : O(1)
                                   
void generateNthrow(int N)
{
    // nC0 = 1
    int prev = 1;
    cout << prev;
 
    for (int i = 1; i <= N; i++) {
        
        int curr = (prev * (N - i + 1)) / i;         // nCr = (nCr-1 * (n - r + 1))/r
        cout << ", " << curr;
        prev = curr;
    }
}

int main()
{
 
    int N = 4;
   
    generateNthrow(N);
    return 0;
}
