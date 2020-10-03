#include<bits/stdc++.h>
#include<string>
using namespace std;
#define int long long 
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        num=num%7;
        if(num==0)
        {
            cout<<83<<endl;
        }
        if(num==1)
        {
            cout<<83<<endl;
        }
        if(num==2)
        {
            cout<<83<<" "<<83<<endl;
        }
        if(num==3)
        {
            cout<<83<<" "<<83<<" "<<69<<endl;
        }
        if(num==4)
        {
            cout<<83<<" "<<83<<" "<<69<<" "<<67<<endl;
        }
        if(num==5)
        {
            cout<<"83 83 69"<<endl;
        }
        if(num==6)
        {
            cout<<"83 83"<<endl;
        }
}
}