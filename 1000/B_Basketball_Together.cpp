#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, d;
    cin >> n >>d;

    vector<ll> a(n);

    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    // l -> weakest remaining player
    // r -> strongest remaining player
    int l=0, r=n-1;
    ll teams=0;

    // current team size
    ll teamSize=1;

    // process until all players are used
    while(l<=r){

        // if current strongest player with current team size can defeat enemy team
        if(a[r] * teamSize>d){
            teams++;

            //resize the team and go to enxt player
            teamSize=1;
            r--;
        }

        else{

            // no more players available
            if(l == r) break;

            // add weakest player to current teams
            teamSize++;
            l++;

            // check again after increasing team size
            if(a[r]*teamSize > d){
                teams++;
                r--;
                teamSize=1;
            }
        }
    }

    cout<<teams<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}