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

        int cnt1=0, cnt0=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='1') cnt1++;
            else cnt0++;
        }

        if(min(cnt0,cnt1)%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }

    return 0;
}