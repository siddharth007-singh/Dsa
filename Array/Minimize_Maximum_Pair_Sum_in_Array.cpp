#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{3,5,2,3};
    int ans;

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            // ans = arr[i]+arr[j];
            // cout<<ans<<endl;
        }
    }

    return 0;
}