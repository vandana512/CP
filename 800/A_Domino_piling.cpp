#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    //square
    // if(m==n){
    //     if(m%2==0) cout<<m<<endl;
    //     else cout<<(m*n-1)/2<<endl;
    // }else{
    //     if((m*n)%2==0) cout<<m*n/2<<endl;
    //     else cout<<(m*n-1)/2<<endl;
    // }
    cout << (m * n) / 2 << '\n';
    return 0;
}