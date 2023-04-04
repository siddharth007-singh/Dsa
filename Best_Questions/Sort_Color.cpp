//Sort the array with 1, 2, 3

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>arr{2, 0, 2, 1, 1, 0};

    // cout<<"After Sorting the aray: ";
    // sort(arr.begin(), arr.end());


    

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }
    return 0;
}