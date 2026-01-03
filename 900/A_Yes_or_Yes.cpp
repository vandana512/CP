#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int count=0;
        for (char c:s) {
            if (c=='Y') count++;
        }

        if (count <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";

    
    }

    return 0;
}