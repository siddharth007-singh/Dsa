#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>

using namespace std;
//this function will use if the array element is having some of the negative no.

// int firstMissing(int arr[], int n)
// {
//     for(int i=0; i<n; i++){
//       if (arr[i] <= 0) {
//         arr[i] = n + 1;
//       }
//     }

//     for (int i = 0; i < n; i++){
//         int idx = abs(arr[i])-1;
//         if(idx<n){
//             arr[idx]*=-1;
//         }
//     }

//     for (int i = 0; i < n; i++){
//         if(arr[i]>0){
//             return i+1;
//         }
//     }
//     return n+1;
// }

int missingNumber(vector<int> &arr){
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            ans = ans ^ arr[i];
        }
    
        // Compute XOR of all the elements from 1 to `n+1`
        for (int i = 1; i <= arr.size() + 1; i++) {
            ans = ans ^ i;
        }
        
        return ans;    
}

int main(){
    vector<int> arr{2, 5, 3, 1 };
    int ans = missingNumber(arr);
    cout<<ans;
    return 0;
}