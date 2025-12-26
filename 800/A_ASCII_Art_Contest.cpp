#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    //cin>>t;
    while (t--){
        int g, c, l;
        cin>>g>>c>>l;

        int mx = max({g, c, l});
        int mn = min({g, c, l});

        if (mx - mn >= 10) {
            cout << "check again";
        } else {
            vector<int> v = {g, c, l};
            sort(v.begin(), v.end());
            cout << "final " << v[1];
        }
    

        
    }

    return 0;
}