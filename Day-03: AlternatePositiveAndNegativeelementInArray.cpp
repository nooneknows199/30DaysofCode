#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the elements of the array: ";      //  Time : O(n)
    int n;                                          // Space : O(n)
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> neg, pos;
    for (int i = 0; i < n; i++) {

	        if (arr[i] < 0)
	            neg.push_back(arr[i]);  // vector will contain the -ve elements of the array
	        else
	            pos.push_back(arr[i]);   // vector will contain the +ve elements of the array
	    }
    int i = 0, j = 0, k = 0;


     while (i < neg.size() && j < pos.size()) {
	        arr[k++] = pos[j++];
	        arr[k++] = neg[i++];   // this will combine the +ve and -ve elements alternatively , where first +ve element comes
	    }
	    
   cout<<"Output Of the given array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

}

OR

 //  Time : O(n)
 // Space : O(1)  , without using extra space

#include <bits/stdc++.h>
using namespace std;

void alt(int a[],int n){
    
    int pivot =0,i=0;
   for( i=0;i<n;i++){
    if(a[i]<0){
        swap(a[pivot] ,a[i]);
    pivot++;
   }
}
    for (int i = 1; i < n; i=i+2){
        swap(a[i],a[pivot]);
        pivot++;
    }


    // print array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main()
{ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	
    int a[] = {1,2,3,-4,-1,4};
    int n = sizeof(a)/sizeof(a[0]);
 
    alt(a,n);
}
