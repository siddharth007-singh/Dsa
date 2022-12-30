#include <iostream>
#include<stack>
using namespace std;

//Recursive Function
void solve(stack<int>&s, int x){
    //base_case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();
    //Recursive Call;
    solve(s, x);
    s.push(num);
}

int main() {
    stack<int>s;
    int x = 55;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    //function call
    solve(s,x);
}   