#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//for Nonduplicate element
// int SortedandRotated(vector<int> &arr, int k){
//     int s=0,e=arr.size()-1;
//     int mid;
    
//     while(s<=e){
//         mid = (s+e)/2;

//         if(arr[mid]==k) return mid;

//         if(arr[s]<=arr[mid]){
//             if(arr[s]<=k && k<=arr[mid]){
//                 e = mid-1;
//             }
//             else{
//                 s = mid+1;
//             }
//         }
//         else{
//             if(arr[mid]<=k && k<=arr[e]){
//                 s = mid+1;
//             }
//             else{
//                 e= mid-1;
//             }
//         }
//     }
//     return -1;
// }

// //For Dupicate eleemnts 
int SortedandRotated(vector<int> &arr, int k){
    int s=0, e=arr.size()-1;
    int mid;

    while(s<=e){
        mid = (s+e)/2;

        if(arr[mid]==k) return mid;

        if(arr[s]==arr[mid] && arr[mid]==arr[e]){
            s++;
            e--;
            continue;
        }

        if(arr[s]<=arr[mid]){
            if(arr[s]<=k && k<=arr[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[e]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    // vector<int> arr{8, 9, 4, 5};
    vector<int> arr{7,8,1,2,3,3,3,4,5,6};
    int k = 3;
    int ans = SortedandRotated(arr,k);
    cout<<ans;
    return 0;
}