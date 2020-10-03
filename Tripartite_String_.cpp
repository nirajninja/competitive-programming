#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void built(ll *tree,ll *arr,ll s,ll e,ll index)
{
  if(s==e)
  {
    tree[index]=arr[s];
    return;
  }
  ll mid=(s+e)/2;
  built(tree,arr,s,mid,2*index);
  built(tree,arr,mid+1,e,2*index+1);
  tree[index]=tree[2*index]+tree[2*index+1];
}
ll  query(ll *tree,ll s,ll e,ll qs,ll qe,ll index)
{
  if(s>qe || e<qs)
  {
    return 0;
  }
  if(qs<=s && qe>=e)
  {
    return tree[index];
  }
  ll mid=(s+e)/2;
  ll left=query(tree,s,mid,qs,qe,2*index);
  ll right=query(tree,mid+1,e,qs,qe,2*index+1);
  return (left+right);
}
void update(ll *tree,ll index,ll ss,ll se,ll si,ll diff)
{  /*if(ss==se):
       t[si] =diff
       return;
    
    mid = (ss+se)//2
    if(mid>=i):
        update(ss, mid, i, 2*si+1, diff, t)
    else:
        update(mid+1, se, i, 2*si+2, diff, t)
    t[si]=t[2*si+1]+t[2*si+2];
    */
    
    if(ss==se)
    {tree[si]+=diff;
        return;
    }
    ll mid=(ss+se)/2;
    if(mid>=index)
        {
            update(tree,index,ss,mid,si,diff);
        }
    else{
        update(tree,index,mid+1,se,si,diff);
        
    }   
    tree[si]=tree[2*si]+tree[2*si+1];
}
void update1(ll *tree,ll ss,ll se,ll i,ll index,ll inc)
{
    if(i>se || i<ss || ss>se)
    {
        return ;
    }
    if(ss==se)
    {
        tree[index]=inc;
        return ;
    }
    ll mid=(ss+se)/2;
    update1(tree,ss,mid,i,2*index,inc);
    update1(tree,mid+1,se,i,2*index+1,inc);
    tree[index]=(tree[2*index]+tree[2*index+1]);
    return;
}
int main() {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
      cin>>arr[i];

    }
    ll tree[4*n+1];
    built(tree,arr,0,n-1,1);
    while(m--)
    {
      char c;
      cin>>c;
      if(c=='G')
      {
        ll l,r;
        cin>>l>>r;
        cout<<query(tree,0,n-1,l,r,1)<<endl;
      }
      else{
        ll index,value;
        cin>>index>>value;
     //   ll diff=value-arr[index];
        
       // cout<<diff<<"diff"<<endl;
        update1(tree,0,n-1,index,1,value+arr[index]);
        //update(tree,index,0,n-1,1,diff);
       
    
      }
    }
  }
  return 0;
}
