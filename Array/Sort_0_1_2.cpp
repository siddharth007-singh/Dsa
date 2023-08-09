#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Brute Full Approch
// void Sort(vector<int> &arr){
//     int i=0;
//         int c_zero=0, c_one=0, c_two=0; 
//         for(int i=0; i<arr.size(); i++){
//             if(a[i]==0)
//                 c_zero=c_zero+1;
//             if(a[i]==1)
//                 c_one=c_one+1;
//             if(a[i]==2)
//                 c_two=c_two+1;
//         }
        
//         while(c_zero!=0)
//             a[i]=0;
//             i++;
//             c_zero = c_zero-1;;
            
//         while(c_one!=1)
//             a[i]=1;
//             i++;
//             c_one = c_one-1;
            
//         while(c_two!=2)
//             a[i]=2;
//             i++;
//             c_two = c_two-1;   
// }

void Sort(vector<int> &arr){
    int s=0, mid=0, e=n-1;
    while(mid<=e){
        if(arr[mid]==0){
            swap(arr[s], arr[mid]);
            s++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[e]);
            e--;
        }
    }
}

int main(){
    vector<int> arr{0,2,1,0,1,2,1,0};
    cout<<Sort(arr);
    return 0;
}