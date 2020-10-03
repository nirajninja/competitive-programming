#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll R,G,B,W,O;
        cin>>R>>G>>B>>W>>O;
        ll max=R;
        if(R>=G && R>=O && R>=W && R>=B)
        {
            cout<<"Champions"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}