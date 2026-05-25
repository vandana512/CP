#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    ll a, b;
    cin>>a>>b;

    if( (a+b) %3 == 0 && max(a,b)<= 2*min(a,b) ){
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

