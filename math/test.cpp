#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,px,py,qx,qy,rx,ry;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>px>>py>>qx>>qy;
        rx=2*qx-px;
        ry=2*qy-py;
        cout<<rx<<" "<<ry<<endl;
    }
 
}