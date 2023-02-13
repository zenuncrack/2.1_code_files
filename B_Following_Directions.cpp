#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,y=0,count = 0;
        cin>>n;
        string str;
        cin>>str;
 
        for(int i=0;i<n;i++)
        {
            if(str[i]== 'U')
            {
                y++;
            }
            else if(str[i]== 'D')
            {
                y--;
            }
            else if(str[i]== 'R')
            {
                x++;
            }
            else if(str[i]== 'L')
            {
                x--;
            }
    
            if(x==1 && y==1)
            {
                count =1;
                break;
            }
            else
            {
                count = 0;
            }
        }
        if(count == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
 
    }
 
}