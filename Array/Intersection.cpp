#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

/// Optimize approch

void InterSection(vector<int> &arr1, vector<int> &arr2){
    int i=0, j=0;

    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

}

///// BruteFull Approch
// void InterSection(vector<int> &arr1, vector<int> &arr2){
//     for(int i=0; i<arr1.size(); i++){
//         int ele = arr1[i];

//         for(int j=0; j<arr2.size(); j++){

                // if(ele<arr2[j])
                // break;

//             if(ele==arr2[j]){
//                 cout<<arr2[j]<<" ";
//                 arr2[j] = -1;
//                 break;
//             }
//         }
//     }
// }

int main(){
    vector<int> arr1 = {1,4,5};
    vector<int> arr2 = {3,4,5};

    InterSection(arr1, arr2);
}