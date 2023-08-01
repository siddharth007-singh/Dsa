#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int Peak_Mountain(vector<int> &arr){
    int s=0, e=arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid]+1){
            s = mid+1;
        }
        else{
            e = mid;
        }

        mid = s+(e-s)/2;
    }
    return s;
}

int main(){
    vector<int> arr{0,10,5,2};
    int ans = Peak_Mountain(arr);
    cout<<ans;
    return 0;
}