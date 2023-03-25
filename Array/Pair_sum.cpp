#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{10,20,30,60,40};
    int sum = 80;

    for(int i=0;i<arr.size();i++){
        int ele = arr[i];

        for(int j=i+1;j<arr.size();j++){
            // cout<<"("<<arr[i]<<" "<<arr[j]<<")"<<endl;

            if(ele+arr[j]==sum){
                cout<<"("<<ele<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    
    return 0;
}