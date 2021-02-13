#include<bits/stdc++.h>       // T.C : O(n log n)
using namespace std;          
int main()
{
	int arr1[50], arr2[50], n, m, size, i, j, k, merge[100],index=0;
	cout<<"Enter Array 1 Size : ";
	cin>>n;
	cout<<"Enter Array 1 Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter Array 2 Size : ";
	cin>>m;
	cout<<"Enter Array 2 Elements : ";
	for(i=0; i<m; i++)
	{
		cin>>arr2[i];
	}
	for(i=0; i<n; i++)
	{
		merge[index]=arr1[i];
		index++;
	}
	for(i=0; i<m; i++)
	{
		merge[index]=arr2[i];
		index++;
	}
	cout<<"the merged unsorted array is :"<<endl;
	for(i=0; i<(n+m); i++)
    {
        cout<<merge[i]<<" ";
    }
    sort(merge,merge+(n+m));
    cout<<"\nthe merged sorted array is :"<<endl;
	for(i=0; i<(n+m); i++)
    {
        cout<<merge[i]<<" ";
    }
    return 0;
}

OR

#include<bits/stdc++.h>       // T.C : O(n1+n2)
using namespace std;          
int main()
{
	int arr1[50], arr2[50], n, m, arr3[100],i=0,j=0,k=0;
	cout<<"Enter Array 1 Size : ";
	cin>>n;
	cout<<"Enter Array 1 Elements : ";
	for(int i=0; i<n; i++)  cin>>arr1[i];
	
	cout<<"Enter Array 2 Size : ";
	cin>>m;
	cout<<"Enter Array 2 Elements : ";
	for(int i=0; i<m; i++)   cin>>arr2[i];

	while(i<n && j<m){
	    if(arr1[i]<arr2[j])
	    arr3[k++] = arr1[i++];
	    
	    else
	     arr3[k++] = arr2[j++];
	}
	while(i<n){
	    arr3[k++] = arr1[i++];
	}
	while(j<m){
	    arr3[k++] = arr2[j++];
	}
	
    cout<<"\nthe merged sorted array is :"<<endl;
	for(i=0; i<(n+m); i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}

OR

#include<bits/stdc++.h>       // T.C : O(n)
using namespace std;          
int main()
{
	int arr1[50], arr2[50], n, m, arr3[100],i=0,j=0,k=0;
	cout<<"Enter Array 1 Size : ";
	cin>>n;
	cout<<"Enter Array 1 Elements : ";
	for(int i=0; i<n; i++)  cin>>arr1[i];
	
	cout<<"Enter Array 2 Size : ";
	cin>>m;
	cout<<"Enter Array 2 Elements : ";
	for(int i=0; i<m; i++)   cin>>arr2[i];

	map<int, bool> mp; 
      
    
    for(int i = 0; i < n; i++) 
    mp[arr1[i]] = true; 
      
    for(int i = 0;i < m;i++) 
    mp[arr2[i]] = true; 
      
    cout<<"\nthe merged sorted array is :"<<endl;
    for(auto i: mp) 
    cout<< i.first <<" "; 
	
    return 0;
}
