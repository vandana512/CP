#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }

        int d=0;
        for(int i=0; i<n-1; i++){
            if(a[i]!=a[i+1]) d++;
        }

        if(d==n-1){
            cout<<n-2<<endl;
        }else{
            cout<<min(n-1, d+2)<<endl;
        }
    }

    return 0;
}
