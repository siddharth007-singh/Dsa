#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr{0,1,0,1,1,0,1,0,1,1};

    int s = 0, e = arr.size()-1;
    int i=0;

    while(s<=e){
        if(arr[i]==0){
            swap(arr[s], arr[i]);
            s++;
            i++;
        }
        if(arr[i]==1){  
            swap(arr[i], arr[e]);
            e--;
        }
    }

    //Print the array
    for(auto value:arr){
        cout<<value<<" ";
    }

    return 0;
}