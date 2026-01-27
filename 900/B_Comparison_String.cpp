#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;

        int maxLen=1;
        int len=1;

        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                len++;
            }
            else{
                len=1;
            }

            maxLen=max(len, maxLen);
        }

        cout<<maxLen+1<<endl;

    
    }

    return 0;
}