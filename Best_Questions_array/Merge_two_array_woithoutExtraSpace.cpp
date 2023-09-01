#include<iostream>
#include<vector>
#include<algorithm>



using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2){
    int i=arr1.size()-1;
    int j=0;

    while(i>=0 && j<arr2.size()){
        if(arr1[i]>arr2[j]){
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

int main(){
    vector<int>arr1{1, 4, 8, 10};
    vector<int> arr2{2, 3, 9};

    merge(arr1, arr2);

    cout << "\narr1[] = ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}