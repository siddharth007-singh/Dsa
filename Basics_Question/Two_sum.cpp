// So, for this problem we can solve in 3 ways 1.BrutFull approch (O(n2))  2.Best approh using Hashing (O(nLongN))  3. optimal approch using two pointer (O(N));
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

//BruteFull approch
// void CheckSum(vector<int> &arr, int k){
//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<arr[i]<<" "<<arr[j];
//                 break;
//             }
//         }
//     }
// }

// //Best approch
// void CheckSum(vector<int> &arr, k){
//     unordered_map<int,int> hash;

//     for(int i=0; i<arr.size(); i++){
//         hash[arr[i]]++;

//         int a = arr[i];
//         int more = k-a;

//         if(hash.find(more) !=hash.end()){
//             cout<<"Find";
//             // eturn {hash[more], i};
//         }
//         // increment part
//         hash[a] = i;
//     }


// }

// //Optimal approch
void CheckSum(vector<int> &arr,int k){
    int s=0, e=arr.size()-1;

    sort(arr.begin(), arr.end());

    while(s<=e){
        if(arr[s]+arr[e]==k){
            cout<<"Found";
        }
        else if(arr[s]+arr[e]>k){
            s++;
        }
        else{
            e--;
        }
    }
}

int main(){
    vector<int> arr{3,2,4};
    int k = 6;

    CheckSum(arr,k);
    return 0;
}