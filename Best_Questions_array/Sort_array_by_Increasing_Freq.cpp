#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> findRepeatingElements(vector<int> &arr){
    unordered_map<int, int>hash;
    for(int i=0;i<arr.size(); i++){
        hash[arr[i]]++;
    }

    sort(arr.begin(), arr.end(), [&](int a, int b){
        if(hash[a]==hash[b])
            return a>b;
        else return hash[a]<hash[b];
    });

    return arr;
}

int main(){
    vector<int> arr{1,1,2,3,4,4,5,2};
    findRepeatingElements(arr);
    return 0;
}
