#include <bits/stdc++.h>           // T.C : O(n log n)
using namespace std;               // S.C : O(1)

int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int f = -1;
     for(int i=0;i<n;i++){
         int idx = upper_bound(arr+i+1,arr+n,k+arr[i]) -arr-1;
         if(arr[idx] -arr[i] == k){
             f=1;
             break;
         }
     }
     cout<<f<<endl;
}
