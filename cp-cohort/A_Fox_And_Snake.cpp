#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        string s(m, '#');
        for(int j=0; j<m; j++){
            if(i%2!=0){
                if(i==3 || i==7 || i==11 || i==15 || i==19 || i==23 || i==27 || i==31 || i==35 ||i==39 || i==43 || i==47){
                    if(j!=0){
                        s[j]='.';;
                    }
                }else{
                    if(j!=m-1){
                        s[j]='.';;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}