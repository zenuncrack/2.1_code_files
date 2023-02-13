/*#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<int>x;
const ll mod=1e9+7;
ll permu(ll n){
    ll p,q;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            p=i;
            q=n/i;
            x.insert(p);
            x.insert(q);
        }
    }
    vector<int>v;
    v.assign(x.begin(),x.end());
    for(int i=0;i<v.size();i++){
        if((v[i]-v[i+1]==1)&&v[i+1])

    }
    return s;
}


int main (){
    ll t ;
    cin >>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<(2*permu(n))%mod<<endl;
    }
}

*/

#include <iostream>
#include <algorithm>
using namespace std;

const int mod = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum = (sum + (n - i) * i) % mod;
        }
        cout << (sum * 2) % mod << endl;
    }
    return 0;
}
