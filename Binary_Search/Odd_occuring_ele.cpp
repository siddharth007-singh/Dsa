// Among 3 main type of binary search question "Observation in Index"


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int OddOccurance(vector<int> &arr){
    int s=0, e=arr.size()-1;
    while(s<=e){
        int mid = s(e-s)/2;
        if(s==e){
            return s;
        }

        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                
            }
        }
        else{

        }
    }
}

int main(){
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = OddOccurance(arr);
    cout<<ans;
    return 0;
}