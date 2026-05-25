#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll power(ll a, ll b){
    ll ans=1;

    while(b>0){
        if( (b&1) ==1){
            ans= (ans*a ) % MOD;
        }
        
        a= (a*a) % MOD;
        b/=2;
        
    }
    return ans; 
}

void solve() {
    ll n;
    cin>>n;

    cout<< power(2, n)<<endl;
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