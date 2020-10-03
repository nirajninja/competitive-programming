#include <iostream>
#include<vector>
using namespace std;
#define num 100001
int p[num]={0};
void primesieve(int *p)
{
    for(int i=3;i<=num;i+=2)
    {
        p[i]=1;
    }
    for(int i=3;i<=10000;i+=2)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<=100000;j+=i)
            {
                p[j]=0;
            }

        }



    }
    p[1]=p[0]=0;
    p[2]=1;
}


int main()
{
    primesieve(p);
   
   int l,r;
   cin>>l>>r;
   for(int i=l;i<=r;i++)
   {
       for(int j=i+1;j<=r;j++)
       {
           if((i*j>=(l*r)/4 &&  i*j<=(l*r)) &&(p[i]==1 && p[j]==1))
           {
               cout<<i<<","<<j<<endl;
           }

       }
   
    }

    return 0;
}
