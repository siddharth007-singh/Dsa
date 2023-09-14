#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void RotateEle(vector<int> &arr, int k){
    vector<int> temp(arr.size());

	for(int i=0; i<arr.size(); i++){
		temp[(i+k)%arr.size()]=arr[i];
	}

	arr = temp;

    // k%=arr.size();
    // reverse(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.end()+k);
    // reverse(arr.end()+k, arr.end());
}

// void printArray(vector<int> &arr){
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int k = 3;
    RotateEle(arr, k);

    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
}
