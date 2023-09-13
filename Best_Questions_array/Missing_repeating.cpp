#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

// void RepeatedEle(vector<int> &arr){
//     int n= arr.size();
//     sort(arr, arr+n);
//     for(int i=0; i<n; i++){
//         if(arr[i]==arr[i+1]){
//             cout<<arr[i];
//         }
//     }
// }

int MissingEle(vector<int> &arr){
    int ans=0; 
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }

    for(int i=1; i<arr.size(); i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    vector<int> arr{1,2,3,5};
    // cout<<"Repeating Ele"<<RepeatedEle(arr);
    int ans = MissingEle(arr);
    cout<<ans;
    return 0;
}