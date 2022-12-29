#include <iostream>
#include<stack>
using namespace std;

void solve(stack<int>s, int size){
    //base_case
    int count = 0;
    if(count==size/2){
        s.pop();
        return;
    }
}

int main() {
    stack<int>s;
    s.push(22);
    s.push(55);
    s.push(32);
    solve(s, count, size);
    cout<<s.top()<<endl;
}
