#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sum(vector<int> &v,int n)
{
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if ((v[i] + v[j] + v[k]) % 2 == 1)
                {
                    cout<<"YES"<<endl;
                    cout << i+1 << " " << j+1<< " " << k+1 << endl;
                    return true;
                    break;
                }
            }
        }
    }
}
int main (){
    int t;
    cin >>t;
    while(t--){
        vector<int>v;
        int x,n,i,j;
        cin >>n;
        for(int i=0;i<n;i++){
            cin >>x;
            v.push_back(x);
        }
       if(!sum(v,n)){
        cout<<"NO"<<endl;
        
       }
       
    }

}

