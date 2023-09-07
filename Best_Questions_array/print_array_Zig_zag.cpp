#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// void PrintZigZag(vector<int> &arr){

//     for(int i=0; i<arr,size()-2; i++){
//         if(i%2==0){
//             if(arr[i]>arr[i+1]){
//                 swap(arr[i], arr[i+1]);
//             }
//         }
//         else if(arr[i]<arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }    
// }

void zigZag(vector<int>& arr)
{
    // sort the array by using the sort function
    sort(arr.begin(), arr.end());
    // traverse the array from 1 to N -1
    for (int i = 1; i < arr.size() - 1; i += 2) {
        // swap the current element with the next element
        swap(arr[i], arr[i + 1]);
    }
    // print the complete array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return;
}

int main(){
    vector<int> arr{4, 3, 7, 8, 6, 2, 1};
    // cout<<PrintZigZag(arr);
    cout<<zigZag(arr);
    return 0;
}