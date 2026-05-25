#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;
const ll INF = 1e18;


void solve() {

    int n;
    cin>>n;

    if(n == 1){
        cout <<"0"<<endl<<"1"<<endl;
        return;
    }

   vector<string> ans;

    ans.push_back("0");
    ans.push_back("1");

    for(int bits=2; bits<=n; bits++) {

        int sz=ans.size();

        // reverse copy
        for(int i = sz - 1; i >= 0; i--) {
            ans.push_back(ans[i]);
        }

        // add 0 to first half
        for(int i = 0; i < sz; i++) {
            ans[i] = "0" + ans[i];
        }

        // add 1 to second half
        for(int i = sz; i < 2 * sz; i++) {
            ans[i] = "1" + ans[i];
        }
    }

    for(string s : ans) {
        cout << s << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}