#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;

        vector<int> a(n);
        int one=0;
        int oneN=0;
        int ans=0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1) one++;
            else oneN++;
        }

        while(one<oneN || oneN%2==1){
            ans++;
            one++;
            oneN--;
        }

        cout<<ans<<endl;
    }

    return 0;
}