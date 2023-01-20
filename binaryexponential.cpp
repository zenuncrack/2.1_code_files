#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void binary_expo(ll b, ll p){

    ll res =1;
    while (p){

        if(p%2==1){
            res*=b;
            p--;
        }
        else {

            b*=b;
            p/=2;

        }
    }
    cout<<res<<endl;

}




int main(){

    ll b,p;
    cout<<"enter your base and power:"<<endl;
    cin >> b>>p;

    binary_expo(b,p);


}