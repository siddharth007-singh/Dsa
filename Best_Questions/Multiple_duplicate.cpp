#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int MultiDuplicate(vector<int> &arr, int n){
    for(int i=0; i<arr.size(); i++){
        int idx = arr[i]%arr.size();
        arr[idx]+=arr.size();
    }

    for(int i=0; i<arr.size(); i++){
        if((arr[i]/arr.size())>=2){
            cout<<arr[i];
        }
    }
        
    // if(arr.size()==0) return {-1};
}

int main(){
    vector<int> arr{2,3,1,2,3};
    int Mult = MultiDuplicate(arr);
    cout<<Mult;
    return 0;
}