#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while(t--){
        long long s,k,m;
        cin>>s>>k>>m;

        long long intervals = m / k;
        long long T, B;

        if (intervals % 2 == 0) {
            T = s;
            B = 0;
        } else {
            long long flow = min(s, k);
            T = flow;
            B = s - flow;
        }
        long long remaining_time = m % k;
        long long final_flow = min(T, remaining_time);
        T -= final_flow;

        cout << T << endl;

    }

    return 0;
}