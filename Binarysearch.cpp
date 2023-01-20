
#include<iostream>
using namespace std;
int main (){


    int a[]={1,2,3,4,5,6,7,8,9,10};
    int s=sizeof(a)/sizeof(a[0]);

    int l=0,r=s-1,m,n;
    cout<<"input your number"<<endl;
    cin >>n;

    while(l<=r){

        m=(l+r)/2;

        if(a[m]==n){

            cout<<m<<endl;

            break;
        }


        if(a[m]<n){

            l=m+1;
        }
        else if (a[m]>n){
            r=m-1;
        }


    }


            cout<<"-1"<<endl;

}
