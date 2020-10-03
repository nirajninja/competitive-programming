#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll pos=0,neg=0;
        unordered_map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
            if(i.first>0)
            {
                pos+=i.first;
            }
            else{
                neg+=i.first;
            }
        }
        cout<<pos<<" "<<neg<<endl;



    }
}