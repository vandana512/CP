#include<bits/stdc++.h>
using namespace std;

//did on 11 oct one of my intial problems

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        
        //vector bana ke array ka input lete hai
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        //we are copying and sorting the same array
        vector<long long> copy = a;
        sort(copy.begin(), copy.end());

        //then checking if sorted==actual and the k should be greater than 1, kyuki 1 size ka hoga to wo to change hi na hopayega na pagal aurat 
        if (copy == a || k > 1)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl;

    }
    return 0;
}