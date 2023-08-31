#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include <unordered_set>

using namespace std;

void findRepeatingElements(vector<int> &arr){
    unordered_map<int,int>m;
    

    for(int i=0; i<arr.size(); i++){
        m[arr[i]]++;
    }

    // unordered_set<int> duplicates;
    
    for(auto x:m){
        if(x.second==1){
            cout<<x.first<<" ";
        }
    }


}

int main(){
    vector<int> arr{1,1,2,3,4,4,5,2};
    findRepeatingElements(arr);
    return 0;
}