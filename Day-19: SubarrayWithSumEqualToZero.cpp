#include <iostream>    // T.C : O(n*n)
#include <unordered_map>
using namespace std;
 
void printAllSubarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0) {
                cout << "Subarray [" << i << "…" << j << "]\n";
            }
        }
    }
}
 
int main()
{
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

    int arr[] = { 4, -4, -3, -1, 0, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printAllSubarrays(arr, n);
 
    return 0;
}

// Method 02:
#include <bits/stdc++.h>        // T.C : O(n)
using namespace std;            // S.C :(n)
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int s= 0;
    int f = -1;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        s += a[i];
        if(s==0 or a[i]==0 or m[s]){
            f = 1;
            break;
        }
        else
        m[s] =1;   // we update the map with that sum 
    }
    if(f==1) cout<< "yes";
    else cout<<"no";
}
