#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<unordered_map>

using namespace std;

int RepeatingAndMissing(vector<int> &arr){
    unordered_map<int,int>hash;
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }

    int missing = -1, repaeting= -1;
    for(int i=0; i<arr.size(); i++){
        if(hash[i]==2) repaeting=i;
        else if(hash[i]==0) missing=i;

        if(missing !=-1 && repaeting!=-1) break;
    }

    return{missing, repaeting};
}



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