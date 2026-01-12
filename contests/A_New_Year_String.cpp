#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;

        if(s.find("2025") != string::npos){
            if(s.find("2026") != string::npos){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
            
        }else{
            cout<<0<<endl;
        }
    }

    return 0;
}