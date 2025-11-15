#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        bool katie=false;
        bool anna=false;

        if (c%2==1){
            if (b > a) 
                cout << "Second" << endl; // Katie wins
            else
                cout << "First" << endl; // Anna wins
        }
        else{
            if (a > b) 
                cout << "First" << endl; // Anna wins
            else
                cout << "Second" << endl; // Katie wins
        }

        // if(a>b+c){
        //     cout<<"First"<<endl;
        // }
        // else if(b>a+c){
        //     cout<<"Second"<<endl;
        // }else{
        //     if(c%2==1 && b>a){
        //         cout<<"Second"<<endl;
        //     }
        //     else if(c%2==1 && a>b){
        //         cout<<"First"<<endl;
        //     }
        //     else if(c%2==0 && a==b ){
        //         cout<<"Second"<<endl;
        //     }
        //     else{
        //         cout<<"First"<<endl;
        //     }
        // }
    }

    return 0;
}