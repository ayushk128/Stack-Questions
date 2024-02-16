#include<bits/stdc++.h>
using namespace std;
class Stack {
    int *arr;
    int size;
    int top;

    public:
    bool flag;
    Stack(int s) {
        size = s;
        arr = new int[s];
        top = -1;
        flag = 1;
    }

    void push(int val) {
        if(top == size - 1) {
            cout << "Stack overflow\n";
            return;
        }
        top++;
        arr[top] = val;
        cout << "Pushed " << val << " into the stack\n";
        flag = 0;
    }
    void pop() {
        if(top == -1) {
            cout << "Stack underflow\n";
            return;
        }
        cout << "Poped " << arr[top] << " from the stack\n";
        top--;
        if(top == -1) {
            flag = 1;
        }
    }
    int peek() {
        if(top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        else return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    int isSize() {
        return top + 1;
    }

};
int main() {

    Stack s(5);
    s.push(-1);
    int value = s.peek();
    if(s.flag == 0)
        cout << value;

}