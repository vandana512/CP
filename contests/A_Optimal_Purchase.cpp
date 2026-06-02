#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, a, b;
    cin >>n>>a>>b;

    ll group=n/3;
    ll left=n%3;

    ll ans= group* min(3*a, b) + min(left *a, b);

    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}