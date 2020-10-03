#include<bits/stdc++.h>
using namespace std;
int q(int i,int  j)
{
    cout<<"? "<<i<<" "<<j<<endl;
    int ans;
    cin>>ans;
    return ans;
}



int main()
{
 vector< int> v ={4, 8, 15, 16, 23, 42};
 vector<int>a;
 for(int i=0;i<4;i++)
 { 
     int ans=q(v[i+1],v[i+2]);
     a.push_back(ans);
   
 }


bool can=1;
 do{

    
        for(int i=0;i<4;i++)
        {
            if(a[i]!=v[i]*v[i+1])
            {
                can=0;
            }
        }
        if(can==1)
        {
            cout<<"! ";
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            //cout<<endl;
        return 0;
        }
 }
 while(next_permutation(v.begin(),v.end()));

}