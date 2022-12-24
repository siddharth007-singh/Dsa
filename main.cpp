#include <iostream>
#include <stack>
using namespace  std;

int main() {
    //creation of stack
    stack <int> s;

    //Push Operations
    s.push(2);
    s.push(3);

    //pop Opertaion
    s.pop();

    cout<<"Printing the top Element "<<s.top()<<" "<<endl;
    if(s.empty()){
        cout<<"Stack is Empty";
    }
    else{
        cout<<"Stack is not Empty";
    }
    return 0;
}
