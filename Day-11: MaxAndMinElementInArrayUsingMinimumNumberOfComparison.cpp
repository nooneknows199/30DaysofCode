#include<bits/stdc++.h>     // T.C : O(n log n)
using namespace std;        // S.C : O(1)
 
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)  cin>>a[i];
   sort(a,a+n);
   cout<<"MinElement: "<<a[0]<<endl;
   cout<<"MaxElement: "<<a[n-1];
}

OR

#include<bits/stdc++.h>     // No.of comparison: 2*(n-2)+1
using namespace std;       
 
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)  cin>>a[i];
   int max,min;
   if(n==1){
       max=a[0];
       min=a[0];
   }
   else{
       if(a[0] > a[1]){     // For initializing max and min  
           max=a[0];
           min=a[1];
       }
       else{
           max=a[1];
           min=a[0];
       }
       for(int i=2;i<n;i++){           // comparison 
           if(a[i] > max)  max=a[i];
           if(a[i] < min)  min=a[i];
       }
}
     cout<<"MinElement: "<<min<<endl;
     cout<<"MaxElement: "<<max;
   }
   
 OR
 
 #include<bits/stdc++.h>     // No.of comparison: for ODD : 3*(n-1)/2
using namespace std;                         // for EVEN : 1 + 3*(n-1)/2
 
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)  cin>>a[i];
   int max,min,i;
   if(n%2==0){
       if(a[0] > a[1]){    
           max=a[0];
           min=a[1];
       }
       else{
           max=a[1];
           min=a[0];
       }
       i=2;
   }
   else{
           max=a[0];
           min=a[0];
           i=1;
   }
     while(i<n-1){
         if(a[i] > a[i+1]){
             if(a[i] > max){
                 max=a[i];
             }
             if(a[i+1] < min){
                 min=a[i+1];
             }
         }
         else{
             if(a[i+1] > max){
                 max=a[i+1];
             }
             if(a[i] < min){
                 min=a[i];
             }
         }
         i=i+2;
     }  

     cout<<"MinElement: "<<min<<endl;
     cout<<"MaxElement: "<<max;
   }
