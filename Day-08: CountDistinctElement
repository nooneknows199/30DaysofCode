#include <iostream>        // T.C : O(N^2)
using namespace std; 
int main() 
{ 
    int n,i,j;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
     int res = 1; 
  
    for (int i = 1; i < n; i++) { 
         for (j = 0; j < i; j++) 
            if (arr[i] == arr[j]) 
                break; 
  
        if (i == j) 
            res++; 
    } 
    cout<<res; 
}  

OR

#include<bits/stdc++.h>          // T.C : O(n log n)
using namespace std;
int main(){
   
      int n,m;
      cout<<"elements in n: ";
        cin>>n;
        int a[n];
        cout<<"enter no of elements in a: ";
        for(int i=0;i<n;i++) cin>>a[i];
        
        sort(a, a + n); 
        
        int count = 0; 
    for (int i = 0; i < n; i++) { 
        while (i < n - 1 && a[i] == a[i + 1]) 
            i++; 
  
       count++; 
    } 
        cout<<"Distint Element in array are: "<<count; 
}

OR

#include<bits/stdc++.h>        // T.C: O(n)
using namespace std;
int main(){
   
      int n,m;
      cout<<"elements in n: ";
        cin>>n;
        int a[n];
        
        unordered_map<int,int> map;
        
        cout<<"enter no of elements in a: ";
        for(int i=0;i<n;i++) {cin>>a[i];
        map[a[i]]++;
        }
        
        cout<<"Distint Element in array are: ";
        cout<<map.size()<<" ";
 }

