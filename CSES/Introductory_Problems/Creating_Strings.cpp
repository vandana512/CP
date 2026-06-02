#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

int n;
set<string> result;

void f(string &s, string &aux, vector<int> &flag){

    if(aux.size()==n){
        result.insert(aux);
        return;
    }
    
    for(int i=0; i<n; i++){
        if(flag[i]==1) continue;

        aux.push_back(s[i]);
        flag[i]=1;
        f(s, aux, flag);
        aux.pop_back();
        flag[i]=0;
    }
}

void solve() {
    string s;
    cin>>s;

    n=s.size();

    string aux;
    vector<int> flag(n, 0);

    f(s, aux, flag);

    cout<<result.size()<<endl;
    for(auto &str : result){
        cout<<str<<endl;
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
