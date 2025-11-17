#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;

    while(t--){
        string a;
        cin>>a;
        int n=a.size();
        string s(n, ' ');
        int j=0;

        for(int i=n-1; i>=0; i--){
            if(a[i]=='p'){
                s[j++]='q';
            }
            if(a[i]=='q'){
                s[j++]='p';
            }
            if(a[i]=='w'){
                s[j++]='w';
            }
        }

        cout<<s<<endl;
    }

    return 0;
}