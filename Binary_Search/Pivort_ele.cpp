// there are basically 3 typr of question in PIVORT topic :
//  a. find the smallest element
//  b. find the largest element 
//  c. sum of left and right from pivort is equal


// Defination: suppose 9,10,2,3,4,5 are the element in the array , when we see taht array it is incresing from 9 to 10 but decressing from 10 to 2
//             in that the order is breaking so we will retun 10 as a pivort element

// Defination 2: maximum number in Srted and rotated array is called PIvort element

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int Pivort(vector<int> &arr){
    int s=0, e=arr.size()-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        //This is is use always when the array is not rotated only sorted 
        if(s==e){
            return s;
        }
        if(mid+1<=e && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid-1>=s && arr[mid-1]>arr[mid]){
            return mid-1;
        }

        if(arr[s]>arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    // vector<int> arr{9,10,2,3,4,5};
    vector<int> arr{2,3,4,5,9,10};
    int ans = Pivort(arr);
    cout<<ans;
    return 0;
}
