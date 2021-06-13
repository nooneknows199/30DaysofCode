#include<bits/stdc++.h>   // T.C : O(n^3)
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++) cin>>arr[i];
    int max = INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
         int sum = 0;
         for(int k=i;k<=j;k++){
             sum += arr[k];
         }
         
        if(sum>max)
        max = sum;
        }
    }
    cout<<max;
}

OR

#include<bits/stdc++.h>   // T.C : O(n^2)
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++) cin>>arr[i];
    int max = INT_MIN;
    for(int i=1;i<=n;i++){
        int sum = 0;
        for(int j=i;j<=n;j++)
        sum += arr[j];
        if(sum>max)
        max = sum;
    }
    cout<<max;
}

OR
// Kadane's Algorithm
#include<bits/stdc++.h>        // T.C : O(n)
using namespace std;           // S.C : O(1)

int maxSubarraySum(int arr[], int n){
  
   int tempMax = arr[0];
   int currentMax = tempMax;

   for (int i = 1; i < n; i++ ) { 
      currentMax = max(arr[i], currentMax+arr[i]);
      tempMax = max(tempMax, currentMax);
   }
   return tempMax;
}

int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
