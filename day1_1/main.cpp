//Stack Implementation Using Array
#include <iostream>
using namespace std;
#include <stack>

class Stack{
    //Properties
public:
    int *arr;
    int top;
    int size;

    //Behaviour
    Stack(int size){
        this->size =size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele){
        if(size-top>1) {
            top++;
            arr[top] = ele;
        }
        else{
            cout<<"Stack Is Full"<<endl;
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
            cout<<"Stack Is UnderFlow"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};


int main() {
    Stack st(5);
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(26);
    st.push(27);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
}
