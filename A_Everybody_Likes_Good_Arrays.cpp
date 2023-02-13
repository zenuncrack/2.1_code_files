#include<bits/stdc++.h>
using namespace std;
int main (){

    int t ;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int> v;
        int x;
        for(int i=0;i<n;i++){
            cin >>x;
            v.push_back(x);
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if ((v[i]%2==0&&v[i+1]%2==0)||(v[i]%2==1&&v[i+1]%2==1))
                    {
                     
                        cnt++;
                        
                    }
        
        }

        cout<<cnt<<endl;
    }
    return 0;


}


