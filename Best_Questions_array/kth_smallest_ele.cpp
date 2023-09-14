#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int KthSamll(vector<int> &arr, int k){
    sort(arr.begin(), arr.end());
    return arr[k-1];
}

int main(){
    vector<int> arr{7, 10, 4, 3, 20, 15};
    int k = 3;
    int ans = KthSamll(arr, k);
    cout<<ans;
    return 0;
}

// Priority Queue through which we can use max-heap and min-heap and then we will solve the problem very easiy