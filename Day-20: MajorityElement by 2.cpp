// Brute force:
#include<bits/stdc++.h>          // T.C : O(n²) 
using namespace std;             // S.C : O(1)
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   
    for(int i=0;i<n;i++){
         int count = 0;
        for(int j=i+1;j<n;j++){
            if(a[j] == a[i])
            count++;
        }
            if(count>n/2)
           cout<< a[i];     
    }
}

OR
// Sorting
#include<bits/stdc++.h>          // T.C : O(n log n) 
using namespace std;             // S.C : O(1)
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   
    sort(a, a+n);
    int i = 1, count = 1;
    while ( i < n )
    {
        while ( i < n and a[i] == a[i-1] )
        {
            i++;
            count++;
        }
       if ( count > n/2 )
            cout<< a[i-1];
        count = 1;
        i ++;
    }
  
}


// By using unordered_map  : 
#include<bits/stdc++.h>         // T.C : O(n)
using namespace std;            // S.C : O(n)

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        unordered_map<int,int> m;
        for(int i = 0;i<n;i++){
            m[arr[i]]++;
        }
        int val = n/2;
        for(auto x:m){
            if(x.second>val)
            cout<<x.first;
        }
    }

    return -1;
}


// Moore Voting Algortihtm
#include<bits/stdc++.h>         // T.C : O(n)
using namespace std;            // S.C : O(1)

int findCandidate(int a[],int n){
   int maj_index = 0, ct = 1;

   for(int i=1;i<n;i++){
      if(ct == 0){
         maj_index = i;
         ct = 1;
      }

      if(a[maj_index] == a[i])
         ct++;
      else
         ct--;
   }
   return a[maj_index];
}

bool isMajority(int a[],int n,int cand){
   int ct = 0;

   for(int i=0;i<n;i++)
      if(a[i] == cand)
         ct++;

      if(ct > n/2)
         return 1;
      else 
         return 0;
}

void printMajority(int a[],int n){
   int cand = findCandidate(a,n);

   if(isMajority(a,n,cand))
      cout<<" "<<cand<<" ";
   else
      cout<<"No Majority element";
}

int main(){
 
  int a[] = {1,3,3,1,3};
  int n = (sizeof(a))/sizeof(a[0]);

  printMajority(a,n);
}
