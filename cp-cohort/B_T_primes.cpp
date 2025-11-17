#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<long long> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    } 

    const int MAX = 1000000; 
    vector<char> isPrime(MAX+1, true);

    isPrime[0]=isPrime[1]=false;

    for(long long i=2;i*i<=MAX;i++){
        if(isPrime[i]){
            for(long long j=i*i;j<=MAX;j+=i){
                 isPrime[j]=false;
            }
        }
    }

    for(long long x:a){
        if(x<=1){
            cout << "NO"<<endl;
            continue;
        }
        long long s = (long long)floor(sqrt((long double)x));

        while((s+1)*(s+1) <= x){
            ++s;
        } 
        while(s*s > x){
            --s;
        } 

        if(s*s == x && s <= MAX && isPrime[(int)s]) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }

    return 0;
}