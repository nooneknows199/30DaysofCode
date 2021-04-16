#include <bits/stdc++.h>      // T.C : O(n logn) 
using namespace std;          // S.C : O(1)
int main()
{
   int n,i;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a,a+n);
   for(i = 0; i < n; i++)
        if(a[i] == a[i+1]) 
            cout << a[i] << " ";
}

OR

#include<bits/stdc++.h>         // T.C : O(n) 
using namespace std;           // S.C : O(n)
int main(){
    
      int n;
      cout<<"elements in array: ";
        cin>>n;
        int a[n];
        unordered_map<int,int> map;
        cout<<"enter no of elements in a: ";
        for(int i=0;i<n;i++) {cin>>a[i];
        map[a[i]]++;
        }
        cout<<"Duplicate elements: ";
        for (auto i: map) 
        if(i.second>1)
        cout<<i.first<<" ";
}


OR

#include <bits/stdc++.h>      // T.C : O(n) 
using namespace std;          // S.C : O(1)
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<n;i++)
   a[a[i]%n] += n;
   
   for(int i=0;i<n;i++){
   if(a[i]/n > 1)
   cout<<i<<endl;
   }
  cout<<-1;
}
