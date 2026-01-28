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

bool nonDecreasing(const string &p) {
    for (int i = 1; i < p.size(); i++)
        if (p[i] < p[i-1]) return false;
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
            continue;
        }

        bool found = false;
        for (int i = 0; i < n; i++) {
            string x = s.substr(0, i) + s.substr(i + 1);
            if (isPalindrome(x)) {
                cout << 1 << "\n";
                cout << i + 1 << "\n";
                found = true;
                break;
            }
        }

        if (!found) cout << "-1\n";
        

    }

    return 0;
}



