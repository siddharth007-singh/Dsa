#include<iostream>
#include<vector>

using namespace std;

void CheckSum(vector<int> &arr, int k){
    int s=0, e=arr.size()-1;

    while(s<=e){
        if(arr[s]+arr[e]==k){
            cout<<"yes";
            s++;
            e--;
        }
        else if(arr[s] + arr[e] < k){
            s++;
        }
        else{
            e--;
        }
    }
}

int main(){
    vector<int> arr{3,2,4};
    int k = 6;

    CheckSum(arr,k);
    return 0;
}