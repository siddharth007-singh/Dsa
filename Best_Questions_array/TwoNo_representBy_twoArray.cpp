//add the eleemt of the array 12+21 = 33;


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int Addvector(vector<int> &arr1, vector<int> &arr2){
    int carry = 0;
    vector<int>ans;
    int i = arr1.size()-1;
    int j = arr2.size()-1;

    while(i>=0 && j>=0){
        int x = arr1[i] + arr2[j] + carry;
        int digit = x%10;
        ans.push_back(digit);

        carry = x/10;
        i--, j--;
    }

    while(i>=0){
        int x = arr1[i] + 0 + carry;
        int digit = x%10;
        ans.push_back(digit);

        carry = x/10;
        i--;
    }

    while(j>=0){
        int x = 0 + arr2[j] + carry;
        int digit = x%10;
        ans.push_back(digit);

        carry = x/10;
        j--;
    }

    if(carry){
        ans.push_back(carry);
    }

    return ans;
}

int main(){
    vector<int>arr1{1,2};
    vector<int>arr2{2,1};

    int ans = Addvector(arr1, arr2);
    cout<<ans;

    return 0;
}