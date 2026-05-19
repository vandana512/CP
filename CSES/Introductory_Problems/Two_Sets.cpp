#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    ll n=1;
    cin>> n;

    ll sum= n * (n+1)/2;

    if(sum%2 != 0){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

    ll target= sum/2;

    vector<int> set1, set2;

    for(int i=n; i>0; i--){
        if(target>=i){
            set1.push_back(i);
            target-=i;
        }
        else{
            set2.push_back(i);
        }
    }

    cout<<set1.size()<<endl;

    for(auto x : set1){
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<set2.size()<<endl;

    for(auto x : set2){
        cout<<x<<" ";
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

