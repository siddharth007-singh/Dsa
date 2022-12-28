// Stack implementation using array

#include <iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *arr;

    //Constructor
    Stack(int s){
        this->size = s;
        arr = new int[s];
        int top = -1;
    }

    void push(int ele){
        if(size-top>1){
            top++;
            arr[top] = ele;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
};

int main() {
    Stack st(5);
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);

    cout<<st.peek()<<endl;
}
