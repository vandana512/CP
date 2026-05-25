#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while (t--){
        string s;
        cin>>s;

        int n=s.length();

        if(s.length() == 1){
            cout<<1<<endl;
            continue;
        }

        int one=0;
        int zero=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='0') zero++;
            else one++;
        }

        if(one==zero){
            cout<<0<<endl;
            continue;
        }

        int lenT=0;

        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                one--;
            }
            else{
                zero--;
            }

            if(zero<0 || one<0){
                break;
            }

            lenT++;
        }

        cout<<n-lenT<<endl;
        
    }

    return 0;
}