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

        char ch=s[n-1];
        int cnt=0;

        for(int i=0; i<n; i++){
            if(s[i]==ch) cnt++;
        }

        cout<<n-cnt<<endl;
    }

    return 0;
}