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
        string s, t;
        cin>>s>>t;

        vector<int> a(26);
        for(int i=0; i<n; i++){
            a[s[i]-'a']++;
        }

        for(int i=0; i<n; i++){
            a[t[i]-'a']--;
        }

        bool flag=false;
        for(int i=0; i<26; i++){
            if(a[i]!=0){
                flag=true;
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }


    }

    return 0;
}