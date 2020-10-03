#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Graph{
    int V;
    unordered_map<string,list<pair<string,int>> > l;

    public:
    void addEdge(string a,string b,int x,bool bired)
    {
        l[a].push_back(make_pair(b,x));
        if(bired)
        {
            l[b].push_back(make_pair(a,x));
        }

    }


    void printlist(){
        for(auto p:l)
        {
            string city=p.first;
            cout<<city<<" -> ";
            list<pair<string,int>>nbr=p.second;
            for(auto nbrs:nbr)
            {
                string dest=nbrs.first;
                int w=nbrs.second;
                cout<<dest<<" "<<w<<" , ";

            }

            cout<<endl;
        }
    }
    

/*
    public:
    Graph(int V)
    {pu
        this->V=V;
        l=new list<int>[V];
    
    }

    void addEdge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);

    }

    void printList()
    {
        for(int i=0;i<V;i++)
        { cout<<i<<"-->";
            for(auto nbr:l[i])
            {
                cout<<nbr<<"--> ";
            }
            cout<<endl;
        }
    }*/
};

int main()
{ 
  Graph g;
  g.addEdge("A","B",20,true);
  g.addEdge("B","D",40,true);

  g.addEdge("A","C",10,true);
  g.addEdge("C","D",40,true);
  g.addEdge("A","D",50,true);
  g.printlist();
 
 // g.addEdge("A","B",20,true);

   return 0;

}  