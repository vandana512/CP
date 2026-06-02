#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,k;
    cin >> n >>k;

    vector<ll> a(n);

    for(int i=0; i<n; i++) cin>>a[i];

    vector<pair<ll, ll>> health(n);

    for(int i=0; i<n; i++){
        if(a[i]%k==0){
            health[i].first= k;
        }
        else health[i].first= a[i]%k;
        health[i].second=i+1;
    }

    sort(health.begin(), health.end(),
        [&](pair<ll,ll> a, pair<ll,ll> b){

            if(a.first == b.first){
                return a.second < b.second;
            }

            return a.first > b.first;
        });

    for(int i=0; i<n; i++){
        cout << health[i].second << " ";
    }

    cout<<endl;
    
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