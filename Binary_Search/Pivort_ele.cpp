// there are basically 3 typr of question in PIVORT topic :
//  a. find the smallest element
//  b. find the largest element 
//  c. sum of left and right from pivort is equal


// Defination: suppose 9,10,2,3,4,5 are the element in the array , when we see taht array it is incresing from 9 to 10 but decressing from 10 to 2
//             in that the order is breaking so we will retun 10 as a pivort element

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int Pivort(vector<int> &arr){
    
}

int main(){
    vector<int> arr{9,10,2,3,4,5};
    int ans = Pivort(arr);
    cout<<ans;
    return 0;
}
