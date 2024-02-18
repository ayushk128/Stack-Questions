#include<bits/stdc++.h>
using namespace std;
vector<int> bracketNumbers(string s)
{
    vector<int> ans;
    stack<int> st;
    
    int counter = 0;
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == '(') {
            counter++;
            ans.emplace_back(counter);
            st.push(counter);
        }
        
        else if(!st.empty() && s[i] == ')') {
            ans.emplace_back(st.top());
            st.pop();
        }
    }
    return ans;
}

int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    string s;
    cin >> s;

    vector<int> ans = bracketNumbers(s);
    for(auto ele : ans) cout << ele << " ";
}