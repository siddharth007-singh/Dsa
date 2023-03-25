#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,10};

    vector<int>ans;

    for(int i=0; i<arr.size(); i++){
        int ele = arr[i];
        
        for(int j=0; j<brr.size(); j++){
            if(ele = brr[j]){
                ans.push_back(ele);
            }
        }
    }

    for(auto values: ans){
        cout<<values<<" ";
    }
    return 0;
}