#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
int32_t main(){
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char>s1;
        stack<char>s2;
        int c=0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]== '(' )
            {
                s1.push(s[i]);
            }
            else if(s[i]==')')
            {
               
                if(!s1.empty())
                {
                if(s1.top()=='(')
                {
                    s1.pop();
                    c++;
                }
                else{
                    continue;
                }
                }
                else{
                    s1.push(s[i]);
                }
            }



            else if(s[i]=='[')
            {
                s2.push(s[i]);
            }
            else if(s[i]==']')
            {
                if(!s2.empty())
                {

                if(s2.top()=='[')
                {
                    s2.pop();
                    c++;
                }
                else{
                continue;}
                }
                else{
                    s2.push(s[i]);
                }
            }
        }
       // s1.clear();
        cout<<c<<endl;
    }
return 0;
}