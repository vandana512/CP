#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    string s;
    cin>>s;
    ll ans=1;
    ll mx=1;

    for(int i=1; i<s.length(); i++){
        if(s[i]==s[i-1]){
            ans++;
            mx=max(ans, mx);
        }
        else{
            ans=1;
        }
    }

    cout<<mx<<endl;

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

