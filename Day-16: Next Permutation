class Solution{             // T.C : O(n)
    public:                 // S.C : O(1)
    void nextPermutation(vector<int> &arr){
int idx = -1;
        int N = arr.size();
        for(int i =N-1;i>0;i--){
            if(arr[i]> arr[i-1]){
                idx= i;
                break;
            }
        }
        if(idx == -1){
            reverse(arr.begin(), arr.end());
        }
        else {
            int prev = idx;
            for(int i=idx+1;i<N;i++){
                if(arr[i]>arr[idx-1] and arr[i]<= arr[prev]){
                    prev = i;
                }
            }
            swap(arr[idx-1],arr[prev]);
            reverse(arr.begin()+idx, arr.end());
        }
    }
};

OR
 
 // Built-in C++ STL
        next_permutation(arr.begin(),arr.end());
