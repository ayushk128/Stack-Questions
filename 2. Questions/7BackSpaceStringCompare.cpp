#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t) {
    stack<char> st1;
    stack<char> st2;

    for(int i = 0; i<s.size(); i++) {
        if(s[i] != '#') st1.push(s[i]);
        else if(!st1.empty()) st1.pop();
    }

    for(int i = 0; i<t.size(); i++) {
        if(t[i] != '#') st2.push(t[i]);
        else if(!st2.empty()) st2.pop();
    }

    if(st1.size() != st2.size()) return false;

    while(!st1.empty() && !st2.empty()) {
        int t1 = st1.top();
        int t2 = st2.top();
        st1.pop();
        st2.pop();

        if(t1 != t2) return false;
    }
    return true;
}

int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    string s;
    cin >> s;

    string t;
    cin >> t;

    cout << backspaceCompare(s, t) << endl;
}