#include <bits/stdc++.h>            // T.C : O(log n)          
using namespace std;                 // S.C : O(1)

int median(int arr[], int s, int e) {
        return (arr[(s + e) / 2] + arr[(s + e + 1) / 2]) / 2;
    }

int findMedian(int a[], int b[], int Sa, int Sb, int Ea, int Eb) {
        if (Ea - Sa <= 1)
            return (max(a[Sa], b[Sb]) + min(a[Ea], b[Eb])) / 2;
        int m1 = median(a, Sa, Ea);
        int m2 = median(b, Sb, Eb);
        if (m1 == m2)
            return m1;
        if (m1 > m2)
            return findMedian(a, b, Sa, (Sb + Eb + 1) / 2, (Sa + Ea + 1) / 2, Eb);
        return findMedian(a, b, (Sa + Ea + 1) / 2, Sb, Ea, (Sb + Eb + 1) / 2);
    }
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,m,k;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++)  cin>>arr1[i];
    for(int i=0;i<n;i++)  cin>>arr2[i];
    
    cout<<findMedian(arr1,arr2,0,0,m-1,n-1);
    
}
