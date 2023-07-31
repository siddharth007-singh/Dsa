#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int BinarySearch(vector<int> &arr, int k){
    int l=0, r=arr.size()-1;

    int mid = (l+r)/2;

    while(l<=r){
        int ele = arr[mid];
        if(ele==arr[mid])
            return mid;
        
        else if(k<ele){
            r = mid-1;
        }
        else{
            l = mid+1;
        }

        mid = (l+r)/2;
    }
    return -1;

}

int main(){
    vector<int> arr{2, 4, 6, 8, 10, 12, 16};
    int key = 2;
    int indexofTarger = BinarySearch(arr, key);
    cout<<indexofTarger;
    return 0;
}