#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>

using namespace std;

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