#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

void Union(vector<int>arr1, vector<int>arr2, vector<int>arr3){
    int i, j, k=0;
    while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}

int main(){
    vector<int> arr1{1,5,10,20,40,80};
    vector<int> arr2{6,7,20,80,100};
    vector<int> arr3{3,4,15,20,3070,80,120};

    Union(arr1, arr2, arr3);    
    return 0;
}