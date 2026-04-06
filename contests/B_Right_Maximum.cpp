#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int mx = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(a[i] >= mx) ans++;
            mx = max(mx, a[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}