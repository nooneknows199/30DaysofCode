#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the elements of the array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> neg, pos;
    for (int i = 0; i < n; i++) {

	        if (arr[i] < 0)
	            neg.push_back(arr[i]);
	        else
	            pos.push_back(arr[i]);
	    }
    int i = 0, j = 0, k = 0;
    
     
	 while (j < pos.size()) { arr[k++] = pos[j++]; }
       while (i < neg.size()) { arr[k++] = neg[i++]; }
       
      cout<<"Output Of the given array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

}

Or

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the elements of the array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    
    for (int i = 0; i < n; i++) {
         sort(arr,arr+n);
	       reverse(arr, arr + n);
	       cout<<arr[i]<<" ";
	    }
}
