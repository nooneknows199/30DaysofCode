// Method 01:

#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reverse(arr,arr+n);
    
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
  return 0;
}


// Method 02:

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    for (int low = 0, high = n - 1; low < high; low++, high--) {
        swap(arr[low], arr[high]);
    }
}
int main() {
  int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reverse(arr,n);
    
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
  return 0;
}


// Method 03:

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    stack<int> s;
 
    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
    }
 
    int index = 0;
 
    while (!s.empty())
    {
        arr[index++] = s.top();
        s.pop();
    }
}
int main() {
  int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reverse(arr,n);
    
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
  return 0;
}

// Method 04:

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
    if (low < high)
    {
        swap(arr[low], arr[high]);
        reverse(arr, low + 1, high - 1);
    }
}

int main() {
  int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reverse(arr, 0, n-1);
    
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
  return 0;
}


// Method 05:

#include <iostream>
using namespace std;
 
void reverse(int arr[], int n)
{
    int aux[n];
 
    for (int i = 0; i < n; i++) {
        aux[n - 1 - i] = arr[i];
    }
 
    for (int i = 0; i < n; i++) {
        arr[i] = aux[i];
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, n);
 
    return 0;
}
