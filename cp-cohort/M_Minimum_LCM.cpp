#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
            continue;
        }

        long long p=n;

        for(long long i=3; i*i<=n; i+=2){
            if(n%i==0){
                p=i;
                break;
            }
        }

        long long ans1=n/p;
        long long ans2=n-ans1;

        cout<<ans1 << " " <<ans2 <<endl;
    }

    return 0;
}