#include<bits/stdc++.h>
using namespace std;
int removeConsecutiveSame(vector<string> v) {
    stack<string> st;
    for(int i = 0; i<v.size(); i++) {
        if(st.empty()) {
            st.push(v[i]);
        }
        else {
            if(st.top() == v[i]) {
                st.pop();
            }
            else st.push(v[i]);
        }
    }
    return st.size();
}
int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    string s;
    vector<string> v;

    for(int i = 0; i<n; i++) {
        cin >> s;
        v.push_back(s);
    }

    cout << removeConsecutiveSame(v) << endl;
}