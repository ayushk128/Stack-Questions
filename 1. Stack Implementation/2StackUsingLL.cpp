#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }

};

class Stack {
    int size;
    Node *top;

    public:
    Stack() {
        top = NULL;
        size = 0;
    }

    void push(int data) {
        Node *temp = new Node(data);
        if(temp == NULL) {
            cout << "Stack Overflow\n";
            return;
        }
        else {
            temp->next = top;
            top = temp;
            size++;
            cout << "Pushed value " << data << " in the stack\n";
        }
    }
    
    void pop() {
        if(top == NULL) {
            cout << "Stack underflow\n";
            return;
        }
        else {
            Node *temp = top;
            cout << "Popped value " << top->data << " from stack\n";
            top = top->next;
            size--;
            delete temp;
        }
    }

    int peek() {
        if(top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        else {
            return top->data;
        }
    }

    bool isEmpty() {
        return top == NULL;
    }

    int Issize() {
        return size;
    }
};
int main() {
    Stack s;
    s.push(5);
    s.push(55);
    s.push(45);
    s.push(10);
    s.push(7);

    cout << s.Issize() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    s.push(-1);

    if(s.isEmpty() == 0) cout << s.peek() << endl;
    s.pop();
    cout << s.isEmpty() << endl;
}