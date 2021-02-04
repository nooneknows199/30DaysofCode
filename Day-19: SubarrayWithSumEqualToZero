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
