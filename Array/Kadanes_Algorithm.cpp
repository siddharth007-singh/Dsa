//Maximum sum Subarray

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{5, -4, -2, 6, -1};

    int maxSum = 0;
    int Currsum = 0;

    for(int i=0; i<arr.size(); i++){
        Currsum = Currsum+arr[i];
        if(Currsum>maxSum){
            maxSum = Currsum;
        }
        if(Currsum<0){
            Currsum = 0;
        }
    }

    cout<<maxSum<<endl;

    return 0;
}