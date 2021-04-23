#include <bits/stdc++.h>       // O(n1+n2+n3)
using namespace std;           // O(n1+n2+n3)
int main() 
{
    int ar1[] = {1, 5, 10, 20, 40, 80}; 
    int ar2[] = {6, 7, 20, 80, 100}; 
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120}; 
    int n1 = sizeof(ar1)/sizeof(ar1[0]); 
    int n2 = sizeof(ar2)/sizeof(ar2[0]); 
    int n3 = sizeof(ar3)/sizeof(ar3[0]); 
  
  unordered_map<int,int> m1,m2,m3;
  for(int i=0;i<n1;i++) m1[ar1[i]]++;
   for(int i=0;i<n2;i++) m2[ar2[i]]++;
    for(int i=0;i<n3;i++) m3[ar3[i]]++;
    
    vector<int> v;
     for(int i=0;i<n1;i++){
         if(m1[ar1[i]] && m2[ar1[i]] && m3[ar1[i]]){
             v.push_back(ar1[i]);
             m1[ar1[i]] = 0;
         }
     }
    
    cout << "Common Elements are: "; 
      for(int i=0;i<v.size();i++)
      cout<<v[i]<<" ";
     
} 

OR

#include <bits/stdc++.h>       // O(n1+n2+n3)
using namespace std;           // O(1)
int main() 
{
    int ar1[] = {1, 5, 10, 20, 40, 80}; 
    int ar2[] = {6, 7, 20, 80, 100}; 
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120}; 
    int n1 = sizeof(ar1)/sizeof(ar1[0]); 
    int n2 = sizeof(ar2)/sizeof(ar2[0]); 
    int n3 = sizeof(ar3)/sizeof(ar3[0]); 
  
    cout << "Common Elements are: "; 
    int i = 0, j = 0, k = 0; 
  
    while (i < n1 && j < n2 && k < n3) 
    { 
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]){ 
          cout << ar1[i] << " ";  
             i++; j++; k++; 
        } 
  
         else if (ar1[i] < ar2[j]) 
             i++; 
  
         else if (ar2[j] < ar3[k]) 
             j++; 
  
         else
             k++; 
    }
    return 0; 
} 
