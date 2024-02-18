#include<bits/stdc++.h>
using namespace std;
vector<int> makeBeautiful(vector<int> arr) {
    int n = arr.size();
    stack<int> st;
    for(int i = 0; i<n; i++) {
        if(st.empty()) {
            st.push(arr[i]);
        }
        else {
            if((st.top() >= 0 && arr[i] < 0) || (st.top() < 0 && arr[i] >= 0)) {
                st.pop();
            }
            else st.push(arr[i]);
        }
    }

    vector<int> ans;
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = makeBeautiful(arr);
    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
}