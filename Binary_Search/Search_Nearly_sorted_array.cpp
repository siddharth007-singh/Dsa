#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int UsingBinarySearch(vector<int> &arr, int k){
    int s=0, e=arr.size()-1;
    vector<int> ans;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(mid-1>=s && arr[mid-1]==k){
            return mid-1;
        }
        else if(mid+1<e && arr[mid+1]==k){
            return mid+1;
        }

        if(k>arr[mid]){
            s = mid+2;
        }
        else{
            e = mid-2;
        }
    }
    return -1;
}

int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target = 50;
    int ans = UsingBinarySearch(arr, target);
    cout<<ans;
    return 0;
}