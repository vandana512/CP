#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        if(n==1){
            cout<<"NO"<<endl;
            continue;
        }

        string rev = s;
        reverse(rev.begin(), rev.end());

        // Already universal
        if(s<rev){
            cout<<"YES\n";
            continue;
        }

        // No swaps allowed
        if(k==0){
            cout<<"NO\n";
            continue;
        }

        //if all characters are same
        bool allSame = true;
        for(int i=1; i<n; i++){
            if(s[i]!=s[0]){
                allSame = false;
                break;
            }
        }

        if(allSame){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }


    }

    return 0;
}
