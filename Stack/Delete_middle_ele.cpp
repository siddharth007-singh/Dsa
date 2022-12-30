#include <iostream>
#include<stack>
using namespace std;

void solve(stack<int>s, int count, int n){
    //base
    if(count==n/2){
        s.pop();
        return;
    }

    //Temprory frist element out 
    int num = s.top();
    s.pop();

    //Recursive Call
    solve(s, count+1, n);
    //now comming back
    s.push(num);
}

void deleteMiddle(stack<int>inputStack, int size){
    int count = 0;
    solve(inputStack, count, N);
}

int main() {
    stack<int>s;
    s.push(22);
    s.push(55);
    s.push(32);
    // solve(s, count, size);
    cout<<"The Top Element is : "<<s.top()<<endl;
}
