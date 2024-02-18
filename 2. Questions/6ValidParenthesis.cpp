#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    int counter = 0;

    for(int i = 0; i<s.size(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);

        else if(!st.empty()) {
            if(s[i] == ')' && st.top() == '(') st.pop();
            else if(s[i] == '}' && st.top() == '{') st.pop();
            else if(s[i] == ']' && st.top() == '[') st.pop();
            else counter++;
        }

        else return false;

    }

    if(counter != 0) return false;
    return st.empty() == true;
}

bool isValid2(string s) {
    stack<char> st;
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else {
            if(st.empty()) {
                return false;
            }
            else if(s[i] == ')' && st.top() != '(') return false;
            else if(s[i] == '}' && st.top() != '{') return false;
            else if(s[i] == ']' && st.top() != '[') return false;

            else st.pop();
        }
    }
    
    return st.empty();
}
int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    string s;
    cin >> s;

    cout << isValid(s) << endl;
}