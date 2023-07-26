#include <iostream>
#include <vector>
#include<algorithm>
#include <functional>

using namespace std;

// //0(n) Approch || best approch
//Store the count of every element and then check frist element which in repeated and return that element
//Store the count of the element by using hashing(C++ STL);
int FristRepeat(vector<int> &arr){
    unordered_map<int, int>hash;  
    for(int i=0; i<arr.size(); i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<arr.size(); i++){
        if(hash[arr[i]]>1){
            return arr[i]; 
        }
    }
    return -1;
}


//BruteFull Approch
// int FristRepeat(vector<int> &arr){
//     for(int i=0; i<arr.size(); i++){
//         bool isRep = false;
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i]==arr[j]){
//                 isRep = true;
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }


int main(){
    vector<int>arr{1,5,3,4,3,5,6}; 
    int ans = FristRepeat(arr);
    cout<<ans;
    return 0;
}