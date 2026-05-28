#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k, q;
    cin>> n >> k >> q;

    vector<ll> a(n);

    for(int i=0; i<n; i++) cin>>a[i];

    ll days=0;
    ll ans=0;

    for(int i=0; i<n; i++){
        if(a[i]<=q){
            days+=1;
        }
        else{
            if(days>=k){
                ll x=days-k + 1;
                ans+=(x*(x+1))/2;
            }
            days=0;
        }
    }

    if(days>=k){
        ll x=days-k + 1;
        ans+=(x * (x + 1)) / 2;
    }

    cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while (t--){
        solve();
    }

    return 0;
}