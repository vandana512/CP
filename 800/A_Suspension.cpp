#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while (t--){
        int n, y,r;
        cin>>n;
        cin>>y>>r;

        cout<<min(n, r+(y/2))<<endl;
    }

    return 0;
}