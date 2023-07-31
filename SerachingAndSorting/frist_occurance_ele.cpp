// This Questionis same as "Frist repated element" in ->Best_question_array
// in that question we use unordered_list (hashMap) for finding the frist occurance of repeated element which is having 0(N) tc.

// In this question we will do the same thing woth wiht the help of BinarySeach to solve this quetion in 0(logN) tc.


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int BinarySerach(vector<int> &arr, int k){
    int s=0, e=arr.size()-1;

    int mid = (s+e)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]==k){
            //Stote the ans;
            ans = mid;
            //search the left section
            e = mid-1;
        }
        else if(k<arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    vector<int> arr{1,3,4,4,4,4,4,6,7,9};
    int k =4;
    int ans = BinarySerach(arr, k);
    cout<<ans;
    return 0;

}