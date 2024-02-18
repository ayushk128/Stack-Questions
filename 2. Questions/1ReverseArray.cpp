#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<char> &s) {

    int n = s.size();
    stack<char> st;
    for(int i = 0; i<n; i++) {
        st.push(s[i]);
    }

    int i = 0;
    while(!st.empty()) {
        char ch = st.top();
        st.pop();
        s[i] = ch;
        i++;
    }
}
int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<char> s(n);

    for(int i = 0; i<n; i++) {
        char ch;
        cin >> ch;
        s[i] = ch;
    }
    reverseArray(s);
    for(int i = 0; i<n; i++) {
        cout << s[i];
    }

}