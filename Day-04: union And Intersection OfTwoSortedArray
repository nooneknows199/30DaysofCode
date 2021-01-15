UNION: 

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter no of test cases:";
    int t;
    cin>>t;
    while(t--){
      int n,m;
      cout<<"elements in n: ";
        cin>>n;
         cout<<"elements in m: ";
        cin>>m;
        int a[n],b[m];
        unordered_map<int,int> map;
        cout<<"enter no of elements in a: ";
        for(int i=0;i<n;i++) {cin>>a[i];
        map[a[i]]++;
        }
         cout<<"enter no of elements in b: ";
        for(int i=0;i<m;i++) {cin>>b[i];
        map[b[i]]++;
        }
        cout<<"Union element of two array: ";
        for (auto i: map) 
        cout<<i.first<<" ";
        
    }
   
}

INTERSECTION:

#include <bits/stdc++.h>
using namespace std;

int printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
      int n,m;
      cout<<"elements in n: ";
        cin>>m;
         cout<<"elements in m: ";
        cin>>n;
        int arr1[m],arr2[n];
          cout<<"enter no of elements in a: ";
        for(int i=0;i<m;i++) cin>>arr1[i];

         cout<<"enter no of elements in b: ";
        for(int i=0;i<n;i++) cin>>arr2[i];
cout<<"Intersection element of two array: ";
    printIntersection(arr1, arr2, m, n);

    return 0;
}
