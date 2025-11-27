#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int freq[26]={0};

        for(int i=0; i<n; i++){
            freq[s[i]-'a']++;
        }

        int odd=0;
        for(int i=0; i<26; i++){
            if(freq[i]%2==1){
                odd++;
            }
        }

        if(odd>max(0,k+1)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }


    return 0;
}