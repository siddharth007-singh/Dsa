#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int CountSmallest(vector<int> arr, int x){
    int i=0;
    for(i=0; i<arr.size(); i++){
        if(arr[i]>x){
            break;
        }
    }
    return i;
}

int main(){
    vector<int> arr{1, 2, 4, 5, 8, 10};
    int x = 9;
    int ans = CountSmallest(arr, x);
    cout<<ans;
    return 0;
}