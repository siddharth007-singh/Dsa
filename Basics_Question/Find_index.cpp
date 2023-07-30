#include<iostream>
#include<vector>

using namespace std;

int findIndex(vector<int> &arr, int k){
    for(int i=0; i<arr.size(); i++){
        if(k==arr[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    vector<int> arr{6, 5, 4, 3, 1, 2};
    int key = 4;
    cout<<findIndex(arr, key);
    return 0;
}