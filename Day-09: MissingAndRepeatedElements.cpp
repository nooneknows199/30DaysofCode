// (Use Sorting)            T.C: O(n Logn)
Approach: 
-Sort the input array.
-Traverse the array and check for missing and repeating.

OR 

#include <iostream>            // T.C : O(n)
#include <unordered_map>       // S.C : O(n)
using namespace std; 
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];

    unordered_map<int, bool> numberMap;
     
    for(int i : arr) 
    {
        if (numberMap.find(i) == 
            numberMap.end())
        {
            numberMap[i] = true;
        }
        else
        {
            cout << "Repeating = " << i;
        }
    }
    cout << endl;
     
    for(int i = 1; i <= n; i++)
    {
        if (numberMap.find(i) == 
            numberMap.end()) 
        {
            cout << "Missing = " << i;
        }
    }
    return 0;
}

OR

#include <bits/stdc++.h>        // T.C : O(n)
using namespace std;            // S.C : O(1)
 
vector<int>repeatedNumber(const vector<int> &A) {
    long long int len = A.size();
    long long int Sum_N = (len * (len+1) ) /2, Sum_NSq = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       Sum_N -= (long long int)A[i];
       Sum_NSq -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (Sum_N + Sum_NSq/Sum_N)/2;
    repeating= missingNumber - Sum_N;
    vector <int> ans;
    ans.push_back(repeating);
    ans.push_back(missingNumber);
    return ans;
     
}
 
 
int main(void){
        std::vector<int> v = {4, 3, 6, 2, 1, 6,7};
    vector<int> res = repeatedNumber(v);
    for(int x: res){
        cout<< x<<"  ";
    }
    cout<<endl;
}

OR 

#include <bits/stdc++.h>        // T.C : O(n)
using namespace std;            // S.C : O(1)

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
       int a,b;
       // for repeated no:
       for(int i=0;i<n;i++) {
           if(arr[abs(arr[i])-1]<0)        // if no is (-)ve then that no is the repeated no 
               a= abs(arr[i]);             // then store that no in a variable
        
           else
          arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];            // if no is visited and no is not (-)ve then make it neagtive by visting that no
       }
       // For missing no :
       for(int i=0;i<n;i++){              // check for that no who is not (-)ve then that no is the missing no
           if(arr[i]>0){
               b=i+1;
               break;
           }
       }
       int *v =new int[2];         // make a dynamic array of size 2 
       v[0] = a;                   // first dynamic array contain the value of a
       v[1] = b;                   // second dynamic array contain the value of b
       return v;                   // hence return dynamic array
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} 
