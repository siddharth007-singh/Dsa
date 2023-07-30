#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int SmallestandLargest(int arr[], int n, int key)
{
    int ans{2, 0};
    int small=0, large = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<=key){
            small++;
        }
        if(arr[i]>=key){
            large++;
        }
    }
    ans[0] = small;
    ans[1] = large;

    return ans;
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 2, 8, 10, 11, 12, 19 };
    int key = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << SmallestandLargest(arr, n, key);
    return 0;
}