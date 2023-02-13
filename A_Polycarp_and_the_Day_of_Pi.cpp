#include<bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main(){
    ll t;
    cin >>t;
    while(t--){
        string s="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        string n ;
         cin >> n;
    int cnt=0;
   
        if(s[1]==3&&n[1]==3){
        for(int i=0;i<n.size();i++){
            if(n[i]==s[i]){
                cnt++;
            }
        }
           cout<<cnt<<endl;
    }
         
    
}   

}