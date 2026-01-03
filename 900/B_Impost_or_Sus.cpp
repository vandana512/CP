#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        string r;
        cin >> r;
        int n = r.size();

        int total_u = 0;
        for (char c : r) if (c == 'u') total_u++;

        int valid_u = 0;
        int i = 0;

        while (i < n) {
            if (r[i] == 's') {
                int j = i + 1;
                int cnt = 0;

                while (j < n && r[j] == 'u') {
                    cnt++;
                    j++;
                }

                // block of u must be followed by s
                if (cnt > 0 && j < n && r[j] == 's') {
                    if (cnt % 2 == 1) valid_u += 1;
                }

                i = j;
            } else {
                i++;
            }
        }


        cout << total_u - valid_u << "\n";
    
    }

    return 0;
}