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
        string s;
        cin>>s;
        int ans=n;

        int l=0, r=n-1;

        while(l<r){
            if(s[l]!=s[r]){
                l++;
                r--;
                ans-=2;
            }
            else{
                break;
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}