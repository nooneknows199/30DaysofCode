// Using sorting
#include <bits/stdc++.h>        // T.C : O(n log n)
using namespace std;            // S.C :(1)
 
int findLongestConseqSubseq(int arr[], int n)
{
    int longest_streak = 0;
    sort(arr, arr+n);
    int i = 0;
    while(i < n)
    {
        int curr_streak = 1;
        while(i < n and arr[i+1] == arr[i] + 1)
        {
            curr_streak++;
            i++;
        }
        
        if ( curr_streak == 1 )
            i++;
        
        longest_streak = max(longest_streak, curr_streak);
    }
    
    return longest_streak;
}

int main()
{
    int arr[] = { 1, 2, 7, 3,4,8 };
    int n = sizeof arr / sizeof arr[0];
    cout << "Length of the Longest contiguous subsequence is : " << findLongestConseqSubseq(arr, n);
    return 0;
}

OR
// Using set
#include <bits/stdc++.h>        // T.C : O(n)
using namespace std;            // S.C :(n)
 
int findLongestConseqSubseq(int arr[], int n)
{
    set<int>s;
    for(int i=0;i<n;i++)  s.insert(arr[i]);
    
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1) == s.end()){
            int j =arr[i] +1;
            while(s.find(j) != s.end())
                j++;
                ans = max(ans,j-arr[i]);
        }
    }
    return ans;
}

int main()
{
    int arr[] = { 1, 2, 7, 3,4,8 };
    int n = sizeof arr / sizeof arr[0];
    cout << "Length of the Longest contiguous subsequence is : " << findLongestConseqSubseq(arr, n);
    return 0;
}
