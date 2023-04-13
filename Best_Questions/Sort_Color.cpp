//Sort the array with 1, 2, 3

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>arr{2, 0, 2, 1, 1, 0};

    // cout<<"After Sorting the aray: ";
    // sort(arr.begin(), arr.end());


    //////////////////////////////////////////////////////////////Count Apporach

    // int zero, ones, tows = 0;

    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==0){
    //         zero++;
    //     }
    //     else if(arr[i]==1){
    //         ones++;
    //     }
    //     else{
    //         tows++;
    //     }
    // }

    // //Now Put intoteh aarray
    // int i=0;
    // while(zero--){
    //     arr[i] = 0;
    // }
    // while(ones--){
    //     arr[i] = 1;
    // }
    // while(tows--){
    //     arr[i] = 2;
    // }

    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i];
    // }


    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i];
    // }


    ///////////////////////////////////////////////////////////3Pointer apporach

    int l=0, m=0, h=arr.size()-1;

    while(m<=h){
        if(arr[m]==0){
            swap(arr[l], arr[m]);
            l++, m++;
        }

        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}