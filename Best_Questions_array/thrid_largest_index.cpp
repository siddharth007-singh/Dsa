#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int thirdLargest(vector<int> &arr){
    if(arr.size()<3){
        cout<<"The size of the array is invalid";
        return -1;
    }

    int frist=1, second=INT_MIN, thrid=INT_MIN;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]>frist){
            thrid=second;
            second = frist;
            frist = arr[i];
            return frist;
        }
        else if(arr[i]>second){
            thrid = second;
            second = arr[i];
            return second;
        }
        else if(arr[i]>thrid){
            thrid= arr[i];
            return thrid;
        }
    }
}

int main(){
    vector<int> arr{2,4,1,3,5};
    //output is : 3;
    int ans = thirdLargest(arr);
    cout<<ans;
    return 0;
}