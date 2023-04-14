#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    vector<int>arr{1, 3, 5, 3, 4};

    int i=0;
    while(i<arr.size()){
        int index = arr[i]-1;
        if(arr[i]!=arr[index]){
            swap(arr[i], arr[index]);
        }
        else{
            i++;
        }
    }


    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }

    return 0;
}