#include<bits/stdc++.h>
using namespace std;
// int minAddToMakeValid(string s) {
//     stack<char> st;
//     int counter = 0;
    
//     for(int i = 0; i<s.size(); i++) {
//         if(s[i] == '(') st.push(s[i]);
//         else if(!st.empty()) st.pop();
//         else counter++;
//     }
//     if(!st.empty()) return st.size() + counter;
//     return counter;
// }

// My own solution
int minAddToMakeValid(string s) {
    int counter = 0;
    int openCounter = 0;

    for(int i = 0; i<s.size(); i++) {
        if(s[i] == '(') counter++;
        else if(counter && s[i] == ')') counter--;
        else openCounter++;
    }
    return openCounter + counter;
}

int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    string s;
    cin >> s;

    cout << minAddToMakeValid(s) << endl;
}