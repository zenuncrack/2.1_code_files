#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main() {
    ll t;

    cin >> t;
    while (t--) {
    list <char> li;
       ll n;
       for(int i=0;i<n;i++){
        char x;
        cin >>x;
        li.push_back(x);
       }
       while(1){
        if((li.front()=='1' && li.back()=='0')||(li.back()=='1' && li.front()=='0'))
        {    li.pop_back();
            li.pop_front();
       }
       else {
         break;
       }
    }

    cout<<li.size()<<endl;
}
}