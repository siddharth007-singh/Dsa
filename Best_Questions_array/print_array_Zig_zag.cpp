#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void SortedandRotated(vector<int> &arr){

    for(int i=0; i<arr,szie()-2; i++){
        if(i%2==0){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        else if(arr[i]<arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }    
}

int main(){
    vector<int> arr{4, 3, 7, 8, 6, 2, 1};
    cout<<SortedandRotated(arr);
    return 0;
}