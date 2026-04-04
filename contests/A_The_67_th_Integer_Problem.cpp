#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while(t--){
        int x;
        cin >> x;

        if(x == 67) {
            cout << 67 << endl;
        } else {
            cout << x + 1 << endl;
        }
    }

    return 0;
}