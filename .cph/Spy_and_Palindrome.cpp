#include<bits/stdc++.h>
using namespace std;
template<typename T>
#define int long long 

class graph{
    
    map<T,list<T>>l;
    public:
    vector<int>v;

    int size=0;
    void add(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void dfs_helper(T src,map<T,bool>&visited)
    {
       // cout<<src<<" ";
        size++;
        visited[src]=true;
        for(T nbr:l[src])
        {
            if(visited[nbr]==false)
            {
                dfs_helper(nbr,visited);

            }
        }
    }

    void dfs()
    {
        map<T,bool>visited;
        for(auto x:l)
        { T node=x.first;
            visited[node]=false;
        }

        int cnt=0;
        for( auto p:l)
        {
        

            T node=p.first;
            if(!visited[node])
            {
            //cout<<"component  "<<cnt<<" -->";

                dfs_helper(node,visited);
                cnt++;
            //  cout<<size;
              v.push_back(size);
              size=0;
             // cout<<endl;
            }

        }
    }
    /*
    void bfs(T src,int n)
    {
        map<T,int>dist;
        queue<T>q;
        /*for(auto node_pair:l)
        {
            T node=node_pair.first;
            dist[node]=INT_MAX;
        }

        for(int i=1;i<=n;i++)
        {
            dist[i]=INT_MAX;
        }
        q.push(src);
        dist[src]=0;
        while(!q.empty())
            {
        
            T node=q.front();
           // cout<<node<<" ";
            q.pop();
            for(auto nbr:l[node])
            {
                if(dist[nbr]==INT_MAX)
                {
                    q.push(nbr);
                    dist[nbr]=dist[node]+6;

                }
            }
        }
        /*
        for(auto node_pair:l)
        {
            T node=node_pair.first;
            int d=dist[node];
            if(d==INT_MAX)
            {
                d=-1;
            }
            cout<<"Node "<<node<<" Distance  from src "<<d<<endl;
       // }*/

    /*    for(int i=1;i<=n;i++)
        {
            if(i==src)
            {
                continue;
            }
            else{
                if(dist[i]==INT_MAX)
                {
                    dist[i]=-1;
                }

                cout<<dist[i]<<" ";
            }
        }

    }*/
    
};
  
  int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  
// Returns factorial of n 

int32_t main()
{
    graph<int>g;
    int astronauts;
    int q;
    cin>>astronauts>>q;
    while (q--)
    {
        int u,v;
        cin>>u>>v;
        g.add(u,v);

    }
    g.dfs();
   int sum=0;
    for(int i=0;i<g.v.size();i++)
    {
        sum+=nCr(g.v[i],2);
       // cout<<g.v[i]<<endl;


    }
    int s2=nCr(astronauts,2);
    cout<<s2-sum<<endl;


//

}