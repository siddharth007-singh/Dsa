#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

///// swapping the postion of the element with its respective index number;

int findDuplicate(vector<int> &arr){
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}


////without modifiying the array by using XOR techique;

// int findDuplicate(vector<int> &arr){
//     int ans =0;

//     for(int i=0; i<arr.size(); i++){
//         ans = ans^arr[i];
//     }

//     for(int i=1; i<arr.size(); i++){
//         ans = ans^i;
//     }

//     return ans;
// }

int main(){

    //with modifing
    vector<int> arr = {2,3,1,2,3};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // sort(arr.begin(), arr.end());

    // for(int i=0; i<n; i++){
    //     if(arr[i]==arr[i+1]){
    //         cout<<arr[i];
    //     }
    // }
    // return -1;

    int ans = findDuplicate(arr);
    cout<<ans;
}

// class Solution{
//   public:
//     vector<int> duplicates(int arr[], int n) {
//        unordered_map<int, int> hash;
//        vector<int> ans;
       
//        for(int i=0; i<n; i++){
//            hash[arr[i]]++;
//        }
       
//         bool duplicate=false;
       
//         for(auto it:hash){
//             if(it.second>1){
//                 ans.push_back(it.first);
//                 duplicate = true;
//             }
//         }
//         sort(ans.begin(),ans.end());
        
//         if(!duplicate){
//             return {-1};
//         }
        
//         return ans;
//     }
// };
