#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findGretElements(vector<int> &arr){
    int ans;
    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size()-2; i++){
        ans = i;
    }
    return ans;
}

int main(){
    vector<int> arr{2, 8, 7, 1, 5};
    cout<<findGretElements(arr);
    return 0;
}