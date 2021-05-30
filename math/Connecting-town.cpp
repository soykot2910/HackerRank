#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int routes[n];
        for(int j=0;j<n-1;j++){
            cin>>routes[j];
        }
        int path=1;
        for(int j=0;j<n-1;j++){
            path=(path*routes[j])%1234567;
        }
        cout<<path<<endl;
    }
    return 0;
}