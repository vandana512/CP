#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while (t--){
        long long k, n;

        cin>>n>>k;

        if(n%2==0) cout<<"YES"<<endl;
        else if(n%2==1 && k%2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}