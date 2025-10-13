#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        set<int> s(a.begin(), a.end());

        // case 1: all elements same
        if (s.size() == 1) {
            cout << "Yes\n";
            continue;
        }

        // case 2: more than 2 different elements
        if (s.size() > 2) {
            cout << "No\n";
            continue;
        }

        // case 3: exactly 2 different elements
        int x = *s.begin();
        int y = *s.rbegin();
        int c1 = count(a.begin(), a.end(), x);
        int c2 = count(a.begin(), a.end(), y);

        // counts should differ by at most 1
        if (abs(c1 - c2) <= 1) cout << "Yes\n";
        else cout << "No\n";
    }
    // int t;
    // cin>>t;

    // while(t--){
    //     long long n;
    //     cin>>n;

    //     vector<long long> a(n);
    //     for(int i=0; i<n; i++){
    //         cin>>a[i];
    //     }

    //     if(n==2) cout<<"YES"<<endl;
    //     else{
    //         long long num1=-1, num2=-1;
    //         bool isValid=true;

    //         for(int i=0; i<n; i++){
    //             if(num1==-1) num1=a[i];
    //             else if(a[i]!=num1 && num2==-1) num2=a[i];
    //             else if(a[i]!=num1 && a[i]!=num2){
    //                 isValid=false;
    //                 break;
    //             }
    //         }

    //         int cnt1=0, cnt2=0;
        
    //         for(int i=0; i<n; i++){
    //             if(a[i]==num1) cnt1++;
    //             else if(a[i]==num2) cnt2++;
    //         }

    //         if(isValid){
    //             if(num2==0 || cnt1==cnt2) cout<<"YES"<<endl;
    //         } 
    //         else cout<<"NO"<<endl;
    //     }
    // }
    return 0;
}