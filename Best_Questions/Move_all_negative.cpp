#include<iostream>
#include<vector>
#include<algorithm>


//////Dutch National Algorithm  (2Pointer approch)


using namespace std;

int main(){
    vector<int>arr{1, 2, -3, 4,-5, 6};

    int l=0, h=arr.size()-1;

    while(l<=h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}