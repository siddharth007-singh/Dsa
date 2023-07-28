#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

void Insertion(vector<int> &arr1, vector<int> &arr2){ 
    int i=0, j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i] == arr2[j]){
            cout<<arr2[j]<<" ";
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

//// Brute Full Apporch
// void Insertion(vector<int> &arr1, vector<int> &arr2){ 
//     for(int i=0; i<arr1.size(); i++){
//         int ele = arr1[0];

//         for(int j=0; j<arr2.size(); j++){

//             if(ele<arr2[j])
//                 break;

//             if(ele==arr2[j]){
//                 cout<<arr2[j];
//                 arr2[i] = -1;
//                 break;
//             }
//         }
//     }
// }

int main(){
    vector<int> arr1{4, 5, 5, 6};
    vector<int> arr2{5,6};

    Insertion(arr1, arr2);
    return 0;
}

