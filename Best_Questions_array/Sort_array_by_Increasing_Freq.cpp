#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

void findRepeatingElements(vector<int> &arr){
    unordered_map<int, int>hash;
    for(int i=0;i<arr.size(); i++){
        hash[arr[i]]++;
    }

    for (auto x : hash)
        cout << x.first << "->" << x.second << endl;
}

int main(){
    vector<int> arr{1,1,2,3,4,4,5,2};   
    findRepeatingElements(arr);
    return 0;
}