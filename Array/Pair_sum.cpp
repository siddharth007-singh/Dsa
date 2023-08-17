#include<iostream>
#include<vector>

using namespace std;

void PairSum(vector<int> &arr, int sum){
    int s=0;
    int e = arr.size();

    while(s<=e){
        if(arr[s]+arr[e]==sum){
            cout<<s;
        }
        else if(arr[s]+arr[e]>sum){
            e--;
        }
        else{
            s++;
        }
    }
}

int main(){
    vector<int> arr{10,20,30,60,40};
    int sum = 80;

    // for(int i=0;i<arr.size();i++){
    //     int ele = arr[i];

    //     for(int j=i+1;j<arr.size();j++){
    //         // cout<<"("<<arr[i]<<" "<<arr[j]<<")"<<endl;

    //         if(ele+arr[j]==sum){
    //             cout<<"("<<ele<<","<<arr[j]<<")"<<endl;
    //         }
    //     }
    // }

    PairSum(arr, sum);
    return 0;
}