#include <iostream>            // T.C : O(mn)
#include <algorithm>          // S.C : O(1)
using namespace std;
int main(){
    int n,m,k;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++)  cin>>arr1[i];
     for(int i=0;i<n;i++)  cin>>arr2[i];
 
     for (int i = 0; i < m;  i++){
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            int first = arr2[0];
 
            for (k = 1; k < n && arr2[k] < first; k++) {
                arr2[k - 1] = arr2[k];
            }
           arr2[k - 1] = first;
        }
    }
    cout << "X: "; 
    for (int i = 0; i < m; i++) {
        cout << arr1[i] << " ";
    }
    cout << '\n';
    cout << "Y: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << '\n';
}

OR
// Gap Method
#include <iostream>            // T.C : O(n) * O(log n
#include <algorithm>          // S.C : O(1)
using namespace std;
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
int main(){
    int n,m,k;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++)  cin>>arr1[i];
     for(int i=0;i<n;i++)  cin>>arr2[i];
 
     int i, j, gap = n + m;
    for (gap = nextGap(gap); 
         gap > 0; gap = nextGap(gap)) 
    {
        for (i = 0; i + gap < m; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        for (j = gap > m ? gap - m : 0; 
             i < m && j < n;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < n) {
           
            for (j = 0; j + gap < n; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
    cout << "X: "; 
    for (int i = 0; i < m; i++) {
        cout << arr1[i] << " ";
    }
    cout << '\n';
    cout << "Y: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << '\n';
}
