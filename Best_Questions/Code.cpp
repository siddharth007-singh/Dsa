#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;


void partition_array(vector<int>& arr, vector<int>& low, vector<int>& high) {
    int pivot = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < pivot) {
            low.push_back(arr[i]);
        } else {
            high.push_back(arr[i]);
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 7, 1, 5, 3};
    vector<int> low;
    vector<int> high;
    partition_array(arr, low, high);

    cout << "Low[]: ";
    for (int num : low) {
        cout << num << " ";
    }
    cout <<endl;

    
    cout << "High[]: ";
    for (int num : high) {
        cout << num << " ";
    }
    cout <<endl;

    return 0;
}
