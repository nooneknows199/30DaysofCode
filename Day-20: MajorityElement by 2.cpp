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

int findMajorityElement(int nums[], int n)
{
    int m;
    int count = 0;
 
    for (int j = 0; j < n; j++)
    {
        if (count == 0) {
            m = nums[j], count = 1;
        }
        else {
            (m == nums[j]) ? count++ : count--;
        }
    }
    
    int mx = 0;
    for(int i =0;i<n;i++){
        if(m == nums[i])
        mx++;
    }
    int size = n/2;
    if(mx > size)
        return m;
    else
        return -1;
}
 

int main(){
   
    int a[11] = { 1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2 };
    
    cout<<findMajorityElement(a,11);
}
