#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n=1;
    cin>>n;


    while(n!=1){
        cout<<n<<" ";
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3)+1;
        }
    }

    cout<<1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}