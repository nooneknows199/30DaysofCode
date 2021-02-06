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
            if(count>n/3)
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
       if ( count > n/3 )
            cout<< a[i-1];
        count = 1;
        i ++;
    }
  
}

OR
// unordered_map :  T.C : O(n)   S.C : O(n)

OR
// Boyer Moore voting algorithm:
#include<bits/stdc++.h>          // T.C : O(n) 
using namespace std;             // S.C : O(1)

int appearsNBy3(int arr[], int n)
{
    int count1 = 0, count2 = 0;
    int first=INT_MAX  , second=INT_MAX ;
 
    for (int i = 0; i < n; i++) {
 
        if (first == arr[i])
            count1++;
 
        else if (second == arr[i])
            count2++;
     
        else if (count1 == 0) {
            count1++;
            first = arr[i];
        }
 
        else if (count2 == 0) {
            count2++;
            second = arr[i];
        }
        else {
            count1--;
            count2--;
        }
    }

    count1 = 0;
    count2 = 0;
 
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == first)
            count1++;
 
        else if (arr[i] == second)
            count2++;
    }
 
    if (count1 > n / 3)
        return first;
 
    if (count2 > n / 3)
        return second;
 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"Answer is : " << appearsNBy3(arr, n) << endl;
}
