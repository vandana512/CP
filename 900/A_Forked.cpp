#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        long long a,b,xk,yk,xq,yq;

        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;

        long long dx[8] = {a, a, -a, -a, b, b, -b, -b};
        long long dy[8] = {b, -b, b, -b, a, -a, a, -a};

        set<pair<long long,long long>> K, Q;
        for (int i = 0; i < 8; ++i) {
            K.insert({xk + dx[i], yk + dy[i]});
            Q.insert({xq + dx[i], yq + dy[i]});
        }

        int ans = 0;
        for (auto &pos : K) if (Q.count(pos)) ++ans;
        
        cout<<ans<<endl;
    }


    return 0;
}