#include<iostream>
#include<vector>

using namespace std;

void MoveZero(vector<int> &arr){
    int nonZero = arr.size()-1;

    for(int i=arr.size(); i>=0; i--){
        if(arr[i]!=0){
            swap(arr[i], arr[nonZero]);
            nonZero--;
        }
    }
}

int main(){
    // vector<int> arr{1,1,0,2,0};
    vector<int> arr{1, 0, 0};
    MoveZero(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}