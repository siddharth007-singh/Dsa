#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void RotateEle(vector<int> &arr, int k){
    // for(int i=0; i<arr.size();i++){
    //     arr[(i+k)%arr.size()]==arr[i];
    // }

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end()-k);
    reverse(arr.end()-k, arr.end());
}

int main(){
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    RotateEle(arr, k);

    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}
