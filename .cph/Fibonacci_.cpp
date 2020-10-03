# include <bits/stdc++.h>

using namespace std;
/*# define ll long long
# define ld long double
# define rep(i,a,b) for(ll i=a;i<b;i++)
# define vi std::vector<int>
# define vll std::vector<ll>
# define vp vector <pair <ll,ll> >
# define vpp vector <pair <pair <ll,ll>,ll> >
# define pp pair <pair <ll,ll>,ll>
# define pb(x) push_back(x)
# define w(x) ll x=0; cin>>x; while(x--)
# define endl '\n'
*/
void simple_as_Fuck(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin) ;
  freopen("output.txt", "w", stdout) ;
  #endif
}

class Node{
  public:
  char data;
  unordered_map<char,Node*>children;
  bool terminal;
   Node(char d)
   {
     data=d;
     terminal=false;
   }

};
class trie{
 
  //int cnt;
  public:
   Node *root;
      trie()
      {
      root= new Node('\0');
    //  cnt=0;
      }

      void insert( string w)
      { Node *temp=root;
          for(int i=0;w[i]!='\0';i++)
          { 
            char ch=w[i];
            if(temp->children.count(ch))
            {
              temp=temp->children[ch];
            }
            else{
              Node* n=new Node(ch);
              temp->children[ch]=n;
              temp=n;
            }

          }
          temp->terminal=true;
      }

      bool find(string w)
      {
        Node* temp=root;
        for(int i=0;w[i]!='\0';i++)
        {
          char ch=w[i];
          if(temp->children.count(ch)==0)
          {
            return false;
          }
          else{
            temp=temp->children[ch];
          }
        }
        

      vector<string>v;
      print(w,v,temp);
      sort(v.begin(),v.end());
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return true;
}

void print(string s,vector<string>&v,Node* temp){
    if(temp->terminal){
        v.push_back(s);
    }
    for(auto i=temp->children.begin();i!=temp->children.end();i++){
        s+=i->second->data;
        print(s,v,i->second);
        s.pop_back();
    }
  }

  };
int32_t main()
{
	//simple_as_Fuck();

  trie T;
  int t;
  cin>>t;
  
    string s;
  while(t--)
  
  {
    cin>>s;
    T.insert(s);
  }
  int m;
  cin>>m;
  while(m--)
  {    // string s;
        cin>>s;
        bool temp=T.find(s);
        if(!temp){
            cout<<"No suggestions"<<endl;
            T.insert(s);
        }

  }

	return 0;
}