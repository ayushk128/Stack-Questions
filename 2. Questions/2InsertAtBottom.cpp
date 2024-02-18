#include<bits/stdc++.h>
using namespace std;
stack<int> insertAtBottom(stack<int> st, int x) {
    stack<int> temp;
    while(!st.empty()) {
        int ele = st.top();
        st.pop();
        temp.push(ele);
    }

    st.push(x);
    while(!temp.empty()) {
        int ele = temp.top();
        temp.pop();
        st.push(ele);
    }

    return st;
}
int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    
    int x;
    cin >> x;

    stack<int> st;
    for(int i = 0; i<n; i++) {
        int a;
        cin >> a;
        st.push(a);
    }

    stack<int> temp = st;
    cout << "Before inserting: \n";
    while(!temp.empty()) {
        int ele = temp.top();
        cout << ele << " ";
        temp.pop();
    }
    cout << endl;

    st = insertAtBottom(st, x);
    cout << "After inserting: \n";

    while(!st.empty()) {
        int ele = st.top();
        cout << ele << " ";
        st.pop();
    }
    cout << endl;
}