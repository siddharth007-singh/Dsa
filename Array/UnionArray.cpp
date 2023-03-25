#include<iostream>
#include <vector>

using namespace std;


int main(){
    int arr1[] = {1,3,5, 7, 9};
    int size1 = 5;
    int arr2[] = {2, 4, 6, 8};
    int size2 = 4;

    vector<int> ans;

    for(int i=0; i<size1; i++){
        ans.push_back(arr1[i]);
    }
    

    for(int i=0; i<size2; i++){
        ans.push_back(arr2[i]);
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }



    return 0;
}