#include <bits/stdc++.h>       // T.C : O(n log n)
using namespace std;           // S.C : O(1)
  
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
      
      sort(a,a+n);
     
      for(int i=0;i<n;i++) cout<<a[i]<<" ";
     cout<<endl;
}

OR

#include <bits/stdc++.h>       // T.C : O(n) + O(n) = O(2n)
using namespace std;           // S.C : O(1)
  
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
     int c0=0,c1=0,c2=0;
   for(int i=0;i<n;i++){
       if(a[i]==0) c0++;
       else if(a[i]==1) c1++;
       else c2++;
   }
   int k=0;
   for(int i=0;i<c0;i++) a[k++]= 0;
    for(int i=0;i<c1;i++) a[k++]= 1;
     for(int i=0;i<c2;i++) a[k++]= 2;
     
      for(int i=0;i<n;i++) cout<<a[i]<<" ";
     cout<<endl;
}

OR

#include <bits/stdc++.h>       // T.C : O(n)
using namespace std;           // S.C : O(1)
                                            // By Dutch National Flag Algorithm
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
      
      int lo = 0;
        int high = n - 1;
        int mid = 0;
        
        while(mid<=high)
            switch(a[mid]){
                    
                case 0:
                    swap(a[lo++], a[mid++]);
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                     swap(a[mid], a[high--]);
                    break;
            }
     
      for(int i=0;i<n;i++) cout<<a[i]<<" ";
     cout<<endl;
}
