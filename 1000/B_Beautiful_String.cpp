#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int l=0;
    int r=s.size()-1;

    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(isPalindrome(s)){
            cout<<0<<endl;
            cout<<" "<<endl;
            continue;
        }

        //SUBSEQUENCE MEANS IN ANY SERIES IT MUST NOT BE CONTIGOUS

        vector<int> a;

        for(int i=0; i<n; i++){
            if(s[i]=='0') a.push_back(i+1);
        }

        cout<<a.size()<<endl;
        for(auto &it: a){
            cout<<it<<" ";
        }

        cout<<endl;
        

    }

    return 0;
}



