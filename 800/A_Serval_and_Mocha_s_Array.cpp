#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while (t--){
        int n;
        cin>>n;

        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        bool flag=false;
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if(__gcd(a[i], a[j])<=2){
                    flag=true;
                }
            }
            
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }

    return 0;
}