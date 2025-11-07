#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool isPresent=false;

        for(int i=0; i<n; i++){
            if(a[i]==k) isPresent=true;
        }

        if(isPresent) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}