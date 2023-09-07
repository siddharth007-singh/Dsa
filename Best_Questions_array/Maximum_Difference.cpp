#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    vector<int> arr{2, 9, 3, 4}
    int n = arr.size();
    int min = arr[0];
	int max = arr[0];

	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
		else if(arr[i]<min){
			min = arr[i];
		}

		int dff = max-min;

		if(dff%2==0){
			cout<<"EVEN";
		}
		else{
			cout<<"ODD";
		}
	}
    return 0;
}