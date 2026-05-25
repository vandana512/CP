#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    string s;
    cin>>s;

    int n=s.length();

    vector<int> freq(26);

    for(int i=0; i<n; i++){
        freq[s[i]-'A']++;
    }

    int odd=0;
    int even=0;

    for(int i=0; i<26; i++){
        if(freq[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if( (n%2 == 0 && odd!=0) || (n%2 != 0 && odd!=1)){
        cout<<"NO SOLUTION"<<endl;
        return;
    }

    string ans(n, ' ');

    int l=0, r=n-1;

    while(l<r){
        for(int j=0; j<26; j++){

            if(freq[j] >= 2){
                ans[l]= (char)('A' + j);
                ans[r]= (char)('A' + j);

                l++, r--;

                freq[j]-=2;
                break;
            }
        }
    }

    if(n % 2 != 0){
        for(int i=0; i<26; i++){
            if(freq[i] == 1){
                ans[n/2] = (char)('A' + i);
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<ans[i];
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}