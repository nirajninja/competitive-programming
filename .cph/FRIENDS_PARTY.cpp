#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            sum+=27;
        }
        else if(s[i]=='B')
        {
            sum+=26;
        }
        
        else if(s[i]=='C')
        {
            sum+=25;
        }
        else if(s[i]=='D')
        {
            sum+=24;
        }
        else if(s[i]=='E')
        {
            sum+=23;
        }
        else if(s[i]=='F')
        {
            sum+=22;
        }
        else if(s[i]=='G')
        {
            sum+=21;
        }
        else if(s[i]=='H')
        {
            sum+=20;
        }
        else if(s[i]=='I')
        {
            sum+=19;
        }
        else if(s[i]=='J')
        {
            sum+=18;
        }
        else if(s[i]=='K')
        {
            sum+=17;
        }
        else if(s[i]=='L')
        {
            sum+=16;
        }
        else if(s[i]=='M')
        {
            sum+=15;
        }
        else if(s[i]=='N')
        {
            sum+=14;
        }
        else if(s[i]=='O')
        {
            sum+=13;
        }
        else if(s[i]=='P')
        {
            sum+=12;
        }
        else if(s[i]=='Q')
        {
            sum+=11;
        }
        else if(s[i]=='R')
        {
            sum+=10;
        }
        else if(s[i]=='S')
        {
            sum+=9;
        }
        else if(s[i]=='T')
        {
            sum+=8;
        }
        else if(s[i]=='U')
        {
            sum+=7;
        }
        else if(s[i]=='V')
        {
            sum+=6;
        }
        else if(s[i]=='W')
        {
            sum+=5;
        }
        else if(s[i]=='X')
        {
            sum+=4;
        }
        else if(s[i]=='Y')
        {
            sum+=3;
        }
        else 
        {
            sum+=2;
        }
    }
    cout<<sum<<endl;
          
}