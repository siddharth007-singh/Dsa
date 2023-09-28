#include<iostream>
#include<vector>
#include<algorithm>



using namespace std;

//Withour using extra space 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, k=m+n-1;

        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }  

        while(i>=0){
            nums1[k--]=nums1[i--];
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
    }

// void merge(vector<int> &arr1, vector<int> &arr2){
//     int i=arr1.size()-1;
//     int j=0;

//     while(i>=0 && j<arr2.size()){
//         if(arr1[i]>arr2[j]){
//             swap(arr1[i], arr2[j]);
//             i--;
//             j++;
//         }
//         else{
//             break;
//         }
//     }

//     sort(arr1.begin(), arr1.end());
//     sort(arr2.begin(), arr2.end());
// }

int main(){
    vector<int>arr1{1, 4, 8, 10};
    vector<int> arr2{2, 3, 9};

    merge(arr1, arr2);

    cout << "\narr1[] = ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}