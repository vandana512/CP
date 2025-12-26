#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    const long long LAST = 1000000000000000000LL;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        set<long long> s(a.begin(), a.end());
        long long d=s.size();

        long long ans=LLONG_MAX;

        // find smallest element >= d
        for (long long x:a) {
            if (x>=d) {
                ans=min(ans,x);
            }
        }

        cout << ans << "\n";
    
    }

    return 0;
}