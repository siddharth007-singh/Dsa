#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

void swapKth(vector<int> arr, int key){
    swap(arr[key-1], arr[arr.size()-key]);
}

int main(){
    vector<int> arr{1,2,3,4,5,6,7};
    int key = 3;
    cout<<swapKth(arr, key);
    return 0;
}