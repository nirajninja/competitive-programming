#include<bits/stdc++.h>
using namespace std;
#define ll long long 


void simple_as_fuck()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void transpose(ll arr[][64] , ll n)
{
    ll brr[n+1][n+1]={0};
for(ll i=0;i<=n;i++)
{
    for(ll j=0;j<=n;j++)
    {
        brr[i][j]=arr[j][i];
    }

}

for(ll i=0;i<=n;i++)
{
    for(ll j=0;j<=n;j++)
    {
        arr[i][j]=brr[i][j];
    }
}

}

int32_t main()
{
    simple_as_fuck();
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll n;
        cin>>n;
        ll arr[64][64];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>arr[i][j];
                v.push_back(arr[i][j]);
            }
        }
        

sort(v.begin(),v.end());
ll k=0;
ll crr[n][n]={0};
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            crr[i][j]=v[k];
            k++;
        }
    }

  ll count=0;
  ll i=n-1;
  while(i>0)
  {
      if(arr[0][i]!=crr[0][i])
      {
          transpose(arr,i);
          count++;
      }
      i--;
  }
  cout<<count<<endl;

        /*

transpose(arr,3);
     for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
               cout<<arr[i][j]<<" ";
             v.push_back(arr[i][j]);
            }
            cout<<endl;
        }
   cout<<endl;





    transpose(arr,2);
     for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
               cout<<arr[i][j]<<" ";
             v.push_back(arr[i][j]);
            }
            cout<<endl;
        }
   
*/

    }
    
return 0;
}