#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{0,1,0,1,1,0,1,0,1,1};

    int s=0, e=arr.size()-1;
    int i=0;

    while(s<=e){
        if(arr[i]==0){
            swap(arr[i], arr[s]);
            s++;
            i++;
        }
        else{
            swap(arr[i], arr[e]);
            e--;
            
        }
    }

    for(auto value:arr){
        cout<<value<<" ";
    }
}