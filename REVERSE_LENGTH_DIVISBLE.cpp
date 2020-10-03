#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int num;
    cin>>num;
    int number=num;
    int len=0;
    while(num>0)
        {
            num=num/10;
            len++;
        }
      //  cout<<len;

    int i=len;
    int flag=1;
    while(i>0)
    {
        int l=len-i+1;
        if(number%l!=0)
        {
            flag=0;
            break;
        }
        number=number/10;
        i--;

    }

    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

}
