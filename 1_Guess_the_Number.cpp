#include<bits/stdc++.h>
using namespace std;
int query(int middle)
{
    cout<<middle<<endl;
    string res;
    cin>>res;
    if(res=="<") return 1;
    else return 2;
}

int main()
{
    int l=1;
    int ans=0;
    int r=1e6;
    while(l<=r)
    {
        int midle=(l+r)/2;
        if(query(midle)==1)
        { 
            
             r=midle-1;

        }
        else{
            ans=midle;
            l=midle+1;
        }
    }
    cout<<"! "<<ans<<endl;
return 0;
}